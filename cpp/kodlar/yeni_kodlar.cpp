#include <iostream>
#include <string>
using namespace std;

// Abstrakt sinif — birbaşa obyekt yaratmaq olmaz,
// yalnız miras üçün baza rolunu oynayır
class Student
{
private:
    // Encapsulation — name yalnız bu sinif daxilindən əlçatandır
    string name;

public:
    // Konstruktor — sinif yaradılarkən name mənimsədilir
    Student(const string& name) : name(name)
    {
    }

    // Getter — name dəyərini oxumaq üçün
    string getName() const
    {
        return name;
    }

    // Setter — name dəyərini dəyişmək üçün
    void setName(const string& n)
    {
        name = n;
    }

    // Saf virtual metod — sinifi abstrakt edir
    // hər alt sinif öz implementasiyasını yazmalıdır
    virtual void showInfo() const = 0;

    // Virtual destruktor — miras zəncirləri üçün vacibdir,
    // delete çağırılanda düzgün sinifin destruktoru işləsin
    virtual ~Student() = default;
};

// Inheritance — GraduateStudent sinifi Student-dən miras alır
class GraduateStudent : public Student
{
private:
    // Bu sinifə məxsus sahə — universitetin adı
    string university;

public:
    // Konstruktor — name Student-ə, university bu sinifə mənimsədilir
    GraduateStudent(const string& name, const string& university)
        : Student(name), university(university)  // Student konstruktorunu çağırır
    {
    }

    // Saf virtual metodun implementasiyası (Polymorphism)
    // override — kompilyatora yoxlama etdirmək üçün
    void showInfo() const override
    {
        // name-ə birbaşa yox, getter vasitəsilə müraciət edilir (Encapsulation)
        cout << "Name:       " << getName()  << "\n";
        cout << "University: " << university << "\n";
    }
};

// Inheritance — PhDStudent sinifi GraduateStudent-dən miras alır
// Beləliklə Student → GraduateStudent → PhDStudent zənciri yaranır
class PhDStudent : public GraduateStudent
{
private:
    // Bu sinifə məxsus sahə — tədqiqat mövzusu
    string researchTopic;

public:
    // Konstruktor — name və university parent-ə ötürülür,
    // researchTopic isə bu sinifə mənimsədilir
    PhDStudent(const string& name,
               const string& university,
               const string& researchTopic)
        : GraduateStudent(name, university),  // GraduateStudent konstruktorunu çağırır
          researchTopic(researchTopic)
    {
    }

    // Method Overriding — GraduateStudent-dəki showInfo() genişləndirilir
    void showInfo() const override
    {
        GraduateStudent::showInfo();           // name + university çap olunur
        cout << "Research:   " << researchTopic << "\n";  // əlavə məlumat
    }
};

int main()
{
    // ── Graduate Student məlumatlarının daxil edilməsi ──────────────
    string gsName, gsUniversity;
    cout << "Enter the name of the graduate student: ";
    getline(cin, gsName);                      // boşluqlu adları düzgün oxuyur
    cout << "Enter the university of the graduate student: ";
    getline(cin, gsUniversity);

    // Polymorphism — Student* göstəricisi GraduateStudent obyektinə işarə edir
    // showInfo() hansı sinifin metodu olduğu runtime-da müəyyən olunur
    Student* gs = new GraduateStudent(gsName, gsUniversity);
    gs->showInfo();
    cout << "\n";

    // ── PhD Student məlumatlarının daxil edilməsi ───────────────────
    string phdName, phdUniversity, phdTopic;
    cout << "Enter the name of the PhD student: ";
    getline(cin, phdName);
    cout << "Enter the university of the PhD student: ";
    getline(cin, phdUniversity);
    cout << "Enter the research topic of the PhD student: ";
    getline(cin, phdTopic);

    // Polymorphism — Student* göstəricisi PhDStudent obyektinə işarə edir
    // PhDStudent-in override edilmiş showInfo() metodu işləyir
    Student* phd = new PhDStudent(phdName, phdUniversity, phdTopic);
    phd->showInfo();

    // Yaddaşı azad et — new ilə ayrılan hər yaddaş delete ilə silinməlidir
    delete gs;
    delete phd;
    return 0;
}