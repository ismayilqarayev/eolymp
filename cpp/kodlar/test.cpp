#include <algorithm>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

class Student
{
private:
    string name;
    string surname;
    int id;
    double gpa;

public:
    Student(string name, string surname, int id, double gpa)
        : name(name), surname(surname), id(id), gpa(gpa)
    {
    }

    int getId() const
    {
        return id;
    }

    double getGpa() const
    {
        return gpa;
    }

    void print() const
    {
        cout << left << setw(8) << id
             << setw(15) << name
             << setw(15) << surname
             << fixed << setprecision(2) << gpa << '\n';
    }
};

class StudentRegistry
{
private:
    vector<Student> students;

    int findIndexById(int id) const
    {
        for (int i = 0; i < (int)students.size(); i++)
        {
            if (students[i].getId() == id)
            {
                return i;
            }
        }

        return -1;
    }

public:
    void addStudent()
    {
        string name;
        string surname;
        int id;
        double gpa;

        cout << "\nAd: ";
        cin >> name;

        cout << "Soyad: ";
        cin >> surname;

        cout << "ID: ";
        cin >> id;

        if (findIndexById(id) != -1)
        {
            cout << "Bu ID artiq movcuddur.\n";
            return;
        }

        cout << "GPA: ";
        cin >> gpa;

        students.push_back(Student(name, surname, id, gpa));
        cout << "Telebe elave edildi.\n";
    }

    void removeStudent()
    {
        int id;
        cout << "\nSilinecek telebenin ID-si: ";
        cin >> id;

        int index = findIndexById(id);
        if (index == -1)
        {
            cout << "Bu ID-li telebe tapilmadi.\n";
            return;
        }

        students.erase(students.begin() + index);
        cout << "Telebe silindi.\n";
    }

    void searchStudent() const
    {
        int id;
        cout << "\nAxtarilacaq ID: ";
        cin >> id;

        int index = findIndexById(id);
        if (index == -1)
        {
            cout << "Telebe tapilmadi.\n";
            return;
        }

        printHeader();
        students[index].print();
    }

    void sortByGpa()
    {
        sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
            return a.getGpa() > b.getGpa();
        });

        cout << "Telebeler GPA-ya gore siralandi.\n";
    }

    void printBestStudent() const
    {
        if (students.empty())
        {
            cout << "\nSiyahi bosdur.\n";
            return;
        }

        int bestIndex = 0;
        for (int i = 1; i < (int)students.size(); i++)
        {
            if (students[i].getGpa() > students[bestIndex].getGpa())
            {
                bestIndex = i;
            }
        }

        cout << "\nEn yuksek GPA-li telebe:\n";
        printHeader();
        students[bestIndex].print();
    }

    void printAll() const
    {
        if (students.empty())
        {
            cout << "\nSiyahi bosdur.\n";
            return;
        }

        cout << "\nTelebe siyahisi:\n";
        printHeader();
        for (const Student& student : students)
        {
            student.print();
        }
    }

    static void printHeader()
    {
        cout << left << setw(8) << "ID"
             << setw(15) << "Ad"
             << setw(15) << "Soyad"
             << "GPA\n";
        cout << string(42, '-') << '\n';
    }
};

void showMenu()
{
    cout << "\n===== Telebe Reyestri =====\n";
    cout << "1. Telebe elave et\n";
    cout << "2. Telebe sil\n";
    cout << "3. Butun telebeleri goster\n";
    cout << "4. ID-ye gore axtar\n";
    cout << "5. GPA-ya gore sirala\n";
    cout << "6. En yaxsi telebeni goster\n";
    cout << "0. Cixis\n";
    cout << "Secim: ";
}

int readChoice()
{
    int choice;
    while (!(cin >> choice))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Zehmet olmasa reqem daxil edin: ";
    }

    return choice;
}

int main()
{
    StudentRegistry registry;
    int choice;

    do
    {
        showMenu();
        choice = readChoice();

        switch (choice)
        {
            case 1:
                registry.addStudent();
                break;
            case 2:
                registry.removeStudent();
                break;
            case 3:
                registry.printAll();
                break;
            case 4:
                registry.searchStudent();
                break;
            case 5:
                registry.sortByGpa();
                registry.printAll();
                break;
            case 6:
                registry.printBestStudent();
                break;
            case 0:
                cout << "Proqram bitdi.\n";
                break;
            default:
                cout << "Yanlis secim.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
