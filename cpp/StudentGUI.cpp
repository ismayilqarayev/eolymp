#include <windows.h>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <limits>
#include <iomanip>
#include <cstdio>
#include <cctype>

struct Student {
    std::wstring name;
    int age;
    int id;
    double grade;

    std::wstring toString() const {
        std::wostringstream oss;
        oss << L"ID: " << id << L"    Name: " << name
            << L"    Age: " << age << L"    Grade: " << grade;
        return oss.str();
    }
};

static std::vector<Student> g_students;
static const char* g_filename = "students.json";

HWND hNameEdit = nullptr;
HWND hAgeEdit = nullptr;
HWND hIdEdit = nullptr;
HWND hGradeEdit = nullptr;
HWND hListEdit = nullptr;

static std::string WideToUtf8(const std::wstring& text) {
    if (text.empty()) return {};
    int size = WideCharToMultiByte(CP_UTF8, 0, text.data(), (int)text.size(), nullptr, 0, nullptr, nullptr);
    std::string result(size, '\0');
    WideCharToMultiByte(CP_UTF8, 0, text.data(), (int)text.size(), result.data(), size, nullptr, nullptr);
    return result;
}

static std::wstring Utf8ToWide(const std::string& text) {
    if (text.empty()) return {};
    int size = MultiByteToWideChar(CP_UTF8, 0, text.data(), (int)text.size(), nullptr, 0);
    std::wstring result(size, L'\0');
    MultiByteToWideChar(CP_UTF8, 0, text.data(), (int)text.size(), result.data(), size);
    return result;
}

static std::string escapeJsonString(const std::string& value) {
    std::string escaped;
    escaped.reserve(value.size());
    for (unsigned char ch : value) {
        switch (ch) {
            case '"': escaped += "\\\""; break;
            case '\\': escaped += "\\\\"; break;
            case '\b': escaped += "\\b"; break;
            case '\f': escaped += "\\f"; break;
            case '\n': escaped += "\\n"; break;
            case '\r': escaped += "\\r"; break;
            case '\t': escaped += "\\t"; break;
            default:
                if (ch < 0x20) {
                    char buf[7];
                    std::snprintf(buf, sizeof(buf), "\\u%04x", ch);
                    escaped += buf;
                } else {
                    escaped += ch;
                }
        }
    }
    return escaped;
}

static std::string readFileContent(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);
    if (!file) return {};
    std::ostringstream oss;
    oss << file.rdbuf();
    return oss.str();
}

static size_t skipWhitespace(const std::string& text, size_t pos) {
    while (pos < text.size() && std::isspace(static_cast<unsigned char>(text[pos]))) {
        pos++;
    }
    return pos;
}

static void expectChar(const std::string& text, size_t& pos, char expected) {
    pos = skipWhitespace(text, pos);
    if (pos >= text.size() || text[pos] != expected) {
        throw std::runtime_error(std::string("Expected '") + expected + "'.");
    }
    pos++;
}

static std::string parseJsonString(const std::string& text, size_t& pos) {
    expectChar(text, pos, '"');
    std::string result;
    while (pos < text.size()) {
        char ch = text[pos++];
        if (ch == '"') break;
        if (ch == '\\' && pos < text.size()) {
            char esc = text[pos++];
            switch (esc) {
                case '"': result += '"'; break;
                case '\\': result += '\\'; break;
                case '/': result += '/'; break;
                case 'b': result += '\b'; break;
                case 'f': result += '\f'; break;
                case 'n': result += '\n'; break;
                case 'r': result += '\r'; break;
                case 't': result += '\t'; break;
                case 'u': {
                    if (pos + 4 <= text.size()) {
                        std::string hex = text.substr(pos, 4);
                        pos += 4;
                        unsigned int code = std::stoul(hex, nullptr, 16);
                        if (code <= 0x7f) {
                            result += static_cast<char>(code);
                        }
                    }
                    break;
                }
                default:
                    result += esc;
            }
        } else {
            result += ch;
        }
    }
    return result;
}

static double parseJsonNumber(const std::string& text, size_t& pos) {
    pos = skipWhitespace(text, pos);
    size_t start = pos;
    if (pos < text.size() && (text[pos] == '-' || text[pos] == '+')) pos++;
    while (pos < text.size() && (std::isdigit(static_cast<unsigned char>(text[pos])) || text[pos] == '.' || text[pos] == 'e' || text[pos] == 'E' || text[pos] == '+' || text[pos] == '-')) {
        pos++;
    }
    if (start == pos) throw std::runtime_error("Invalid number in JSON.");
    return std::stod(text.substr(start, pos - start));
}

static Student parseStudentObject(const std::string& text, size_t& pos) {
    expectChar(text, pos, '{');
    std::wstring name;
    int age = 0;
    int id = 0;
    double grade = 0.0;

    while (true) {
        pos = skipWhitespace(text, pos);
        if (pos < text.size() && text[pos] == '}') {
            pos++;
            break;
        }

        std::string key = parseJsonString(text, pos);
        expectChar(text, pos, ':');

        if (key == "name") {
            name = Utf8ToWide(parseJsonString(text, pos));
        } else if (key == "age") {
            age = static_cast<int>(parseJsonNumber(text, pos));
        } else if (key == "id") {
            id = static_cast<int>(parseJsonNumber(text, pos));
        } else if (key == "grade") {
            grade = parseJsonNumber(text, pos);
        } else {
            parseJsonString(text, pos);
        }

        pos = skipWhitespace(text, pos);
        if (pos < text.size() && text[pos] == ',') {
            pos++;
            continue;
        }
    }

    return Student{name, age, id, grade};
}

void UpdateStudentList() {
    std::wstring text;
    for (const auto& student : g_students) {
        text += student.toString();
        text += L"\r\n";
    }
    SetWindowTextW(hListEdit, text.c_str());
}

int GetIntFromEdit(HWND edit, int defaultValue) {
    wchar_t buffer[64] = {};
    GetWindowTextW(edit, buffer, _countof(buffer));
    try {
        return std::stoi(buffer);
    } catch (...) {
        return defaultValue;
    }
}

double GetDoubleFromEdit(HWND edit, double defaultValue) {
    wchar_t buffer[64] = {};
    GetWindowTextW(edit, buffer, _countof(buffer));
    try {
        return std::stod(buffer);
    } catch (...) {
        return defaultValue;
    }
}

void ShowErrorMessage(const std::wstring& message) {
    MessageBoxW(nullptr, message.c_str(), L"Error", MB_ICONERROR | MB_OK);
}

void AddStudent() {
    wchar_t nameBuffer[128] = {};
    GetWindowTextW(hNameEdit, nameBuffer, _countof(nameBuffer));
    std::wstring name(nameBuffer);
    int age = GetIntFromEdit(hAgeEdit, -1);
    int id = GetIntFromEdit(hIdEdit, -1);
    double grade = GetDoubleFromEdit(hGradeEdit, -1.0);

    if (name.empty() || age <= 0 || id <= 0 || grade < 0.0) {
        ShowErrorMessage(L"Please enter valid student data. Age, ID, and grade must be positive.");
        return;
    }

    g_students.push_back(Student{name, age, id, grade});
    UpdateStudentList();
}

void SaveStudents() {
    std::ofstream file(g_filename, std::ios::binary);
    if (!file) {
        ShowErrorMessage(L"Unable to open file for saving.");
        return;
    }

    file << "{\"students\": [";
    for (size_t i = 0; i < g_students.size(); ++i) {
        const auto& student = g_students[i];
        file << "{\"name\":\"" << escapeJsonString(WideToUtf8(student.name))
             << "\",\"age\":" << student.age
             << ",\"id\":" << student.id
             << ",\"grade\":" << std::fixed << std::setprecision(2) << student.grade
             << "}";
        if (i + 1 < g_students.size()) {
            file << ',';
        }
    }
    file << "]}";

    MessageBoxW(nullptr, L"Students saved successfully.", L"Saved", MB_OK | MB_ICONINFORMATION);
}

void LoadStudents() {
    std::string content = readFileContent(std::string("students.json"));
    if (content.empty()) {
        ShowErrorMessage(L"Unable to open or read JSON file.");
        return;
    }

    size_t pos = 0;
    try {
        expectChar(content, pos, '{');
        std::string rootKey = parseJsonString(content, pos);
        expectChar(content, pos, ':');
        expectChar(content, pos, '[');

        g_students.clear();
        pos = skipWhitespace(content, pos);
        while (pos < content.size() && content[pos] != ']') {
            g_students.push_back(parseStudentObject(content, pos));
            pos = skipWhitespace(content, pos);
            if (pos < content.size() && content[pos] == ',') {
                pos++;
            }
        }
        expectChar(content, pos, ']');
    } catch (const std::exception& ex) {
        ShowErrorMessage(std::wstring(L"JSON parse error: ") + Utf8ToWide(ex.what()));
        return;
    }

    UpdateStudentList();
    MessageBoxW(nullptr, L"Students loaded successfully.", L"Loaded", MB_OK | MB_ICONINFORMATION);
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_COMMAND:
            switch (LOWORD(wParam)) {
                case 1:
                    AddStudent();
                    break;
                case 2:
                    SaveStudents();
                    break;
                case 3:
                    LoadStudents();
                    break;
                case 4: {
                    if (g_students.empty()) {
                        MessageBoxW(hwnd, L"No students available.", L"Info", MB_OK | MB_ICONINFORMATION);
                    } else {
                        double total = 0.0;
                        for (const auto& s : g_students) total += s.grade;
                        double average = total / g_students.size();
                        std::wostringstream oss;
                        oss << L"Average grade: " << average;
                        MessageBoxW(hwnd, oss.str().c_str(), L"Average", MB_OK | MB_ICONINFORMATION);
                    }
                    break;
                }
            }
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        default:
            return DefWindowProcW(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int main() {
    return wWinMain(GetModuleHandleW(NULL), NULL, GetCommandLineW(), SW_SHOWDEFAULT);
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR, int nCmdShow) {
    const wchar_t CLASS_NAME[] = L"StudentManagerWindowClass";

    WNDCLASSW wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);

    RegisterClassW(&wc);

    HWND hwnd = CreateWindowExW(
        0,
        CLASS_NAME,
        L"Student Manager",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 600, 420,
        nullptr,
        nullptr,
        hInstance,
        nullptr
    );

    if (!hwnd) {
        return 0;
    }

    CreateWindowW(L"STATIC", L"Name:", WS_VISIBLE | WS_CHILD, 20, 20, 60, 20, hwnd, nullptr, hInstance, nullptr);
    hNameEdit = CreateWindowW(L"EDIT", L"", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_LEFT, 90, 20, 220, 24, hwnd, nullptr, hInstance, nullptr);

    CreateWindowW(L"STATIC", L"Age:", WS_VISIBLE | WS_CHILD, 20, 60, 60, 20, hwnd, nullptr, hInstance, nullptr);
    hAgeEdit = CreateWindowW(L"EDIT", L"", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_LEFT, 90, 60, 100, 24, hwnd, nullptr, hInstance, nullptr);

    CreateWindowW(L"STATIC", L"ID:", WS_VISIBLE | WS_CHILD, 220, 60, 60, 20, hwnd, nullptr, hInstance, nullptr);
    hIdEdit = CreateWindowW(L"EDIT", L"", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_LEFT, 250, 60, 100, 24, hwnd, nullptr, hInstance, nullptr);

    CreateWindowW(L"STATIC", L"Grade:", WS_VISIBLE | WS_CHILD, 20, 100, 60, 20, hwnd, nullptr, hInstance, nullptr);
    hGradeEdit = CreateWindowW(L"EDIT", L"", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_LEFT, 90, 100, 100, 24, hwnd, nullptr, hInstance, nullptr);

    CreateWindowW(L"BUTTON", L"Add Student", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 20, 140, 110, 28, hwnd, reinterpret_cast<HMENU>(1), hInstance, nullptr);
    CreateWindowW(L"BUTTON", L"Save", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 140, 140, 80, 28, hwnd, reinterpret_cast<HMENU>(2), hInstance, nullptr);
    CreateWindowW(L"BUTTON", L"Load", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 230, 140, 80, 28, hwnd, reinterpret_cast<HMENU>(3), hInstance, nullptr);
    CreateWindowW(L"BUTTON", L"Average", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 320, 140, 100, 28, hwnd, reinterpret_cast<HMENU>(4), hInstance, nullptr);

    CreateWindowW(L"STATIC", L"Student list:", WS_VISIBLE | WS_CHILD, 20, 190, 100, 20, hwnd, nullptr, hInstance, nullptr);
    hListEdit = CreateWindowW(L"EDIT", L"", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOVSCROLL | ES_READONLY, 20, 215, 540, 140, hwnd, nullptr, hInstance, nullptr);

    ShowWindow(hwnd, nCmdShow);

    MSG msg = {};
    while (GetMessageW(&msg, nullptr, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }

    return 0;
}
