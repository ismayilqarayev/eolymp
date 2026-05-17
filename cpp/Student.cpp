#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>
#include <sstream>
#include <cstdio>
#include <cctype>

class Student {
private:
    std::string name;
    int age;
    int id;
    double grade;

public:
    Student() : name(""), age(0), id(0), grade(0.0) {}

    Student(const std::string& name, int age, int id, double grade)
        : name(name), age(age), id(id), grade(grade) {}

    std::string getName() const { return name; }
    int getAge() const { return age; }
    int getId() const { return id; }
    double getGrade() const { return grade; }

    void print() const {
        std::cout << std::left << std::setw(10) << id
                  << std::setw(20) << name
                  << std::setw(6) << age
                  << std::fixed << std::setprecision(2)
                  << grade << '\n';
    }

    std::string toJson() const {
        auto escape = [](const std::string& value) {
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
        };

        std::ostringstream oss;
        oss << "{\"name\":\"" << escape(name)
            << "\",\"age\":" << age
            << ",\"id\":" << id
            << ",\"grade\":" << std::fixed << std::setprecision(2) << grade
            << "}";
        return oss.str();
    }
};

static std::string readFileContent(const std::string& filename) {
    std::ifstream file(filename);
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
    std::string name;
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
            name = parseJsonString(text, pos);
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

    return Student(name, age, id, grade);
}

void saveToFile(const std::vector<Student>& students, const std::string& filename) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Unable to open file for writing: " << filename << "\n";
        return;
    }

    file << "{\"students\":[";
    for (size_t i = 0; i < students.size(); ++i) {
        file << students[i].toJson();
        if (i + 1 < students.size()) file << ",";
    }
    file << "]}";

    std::cout << "Saved " << students.size() << " students to " << filename << ".\n";
}

std::vector<Student> loadFromFile(const std::string& filename) {
    std::vector<Student> students;
    std::string content = readFileContent(filename);
    if (content.empty()) return students;

    size_t pos = 0;
    expectChar(content, pos, '{');
    std::string rootKey = parseJsonString(content, pos);
    expectChar(content, pos, ':');
    expectChar(content, pos, '[');

    pos = skipWhitespace(content, pos);
    while (pos < content.size() && content[pos] != ']') {
        students.push_back(parseStudentObject(content, pos));
        pos = skipWhitespace(content, pos);
        if (pos < content.size() && content[pos] == ',') {
            pos++;
            continue;
        }
    }
    expectChar(content, pos, ']');

    std::cout << "Loaded " << students.size() << " students from " << filename << ".\n";
    return students;
}

void printHeader() {
    std::cout << std::left << std::setw(10) << "ID"
              << std::setw(20) << "Name"
              << std::setw(6) << "Age"
              << "Grade\n";
    std::cout << std::string(45, '-') << '\n';
}

void printStudents(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "No students available.\n";
        return;
    }

    printHeader();
    for (const auto& student : students) {
        student.print();
    }
}

double calculateAverage(const std::vector<Student>& students) {
    if (students.empty()) return 0.0;
    double total = 0.0;
    for (const auto& student : students) {
        total += student.getGrade();
    }
    return total / students.size();
}

void enterStudents(std::vector<Student>& students) {
    std::cout << "Enter number of students: ";
    int count;
    if (!(std::cin >> count) || count <= 0) {
        std::cerr << "Invalid number of students." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    students.clear();
    students.reserve(count);

    for (int i = 0; i < count; ++i) {
        std::string name;
        int age;
        int id;
        double grade;

        std::cout << "\nStudent #" << (i + 1) << " name: ";
        std::getline(std::cin, name);

        std::cout << "Age: ";
        std::cin >> age;

        std::cout << "ID: ";
        std::cin >> id;

        std::cout << "Grade: ";
        std::cin >> grade;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        students.emplace_back(name, age, id, grade);
    }
}

int main() {
    std::vector<Student> students;
    std::string filename = "students.json";

    while (true) {
        std::cout << "\nStudent program menu:\n";
        std::cout << "1. Enter students manually\n";
        std::cout << "2. Load students from file\n";
        std::cout << "3. Save students to file\n";
        std::cout << "4. Show students\n";
        std::cout << "5. Show average grade\n";
        std::cout << "6. Exit\n";
        std::cout << "Choose an option: ";

        int option;
        if (!(std::cin >> option)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a valid number.\n";
            continue;
        }

        switch (option) {
            case 1:
                enterStudents(students);
                break;
            case 2:
                students = loadFromFile(filename);
                break;
            case 3:
                saveToFile(students, filename);
                break;
            case 4:
                printStudents(students);
                break;
            case 5:
                if (students.empty()) {
                    std::cout << "No students available.\n";
                } else {
                    std::cout << "Average grade: " << std::fixed << std::setprecision(2)
                              << calculateAverage(students) << '\n';
                }
                break;
            case 6:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid option. Enter 1-6.\n";
                break;
        }
    }
}
