#include <iostream>
#include <string>

using namespace std;

// ================= ABSTRACT CLASS =================
// Student abstrakt sinifidir.
// Bu sinifden birbasa obyekt yaratmaq olmaz.
// Diger sinifler ucun baza rolunu oynayir.
class Student
{
private:

    // ================= ENCAPSULATION =================
    // name private oldugu ucun birbasa elcatan deyil.
    // Yalniz getter ve setter vasitəsilə istifade olunur.
    string name;

public:

    // ================= CONSTRUCTOR =================
    // Obyekt yaradilan zaman name deyerini menimsedir.
    Student(string name)
    {
        this->name = name;
    }

    // ================= GETTER =================
    // name deyerini qaytarir.
    string getName()
    {
        return name;
    }

    // ================= SETTER =================
    // name deyerini deyismeye imkan verir.
    void setName(string name)
    {
        this->name = name;
    }

    // ================= PURE VIRTUAL FUNCTION =================
    // Bu metod abstrakt metoddur.
    // Her child class bu metodu override etmelidir.
    virtual void showInfo() = 0;

    // ================= VIRTUAL DESTRUCTOR =================
    // Dynamic memory istifadəsində düzgün silinme ucundur.
    virtual ~Student()
    {
    }
};

// ================= INHERITANCE =================
// GraduateStudent sinifi Student sinifinden miras alir.
class GraduateStudent : public Student
{
private:

    // GraduateStudent sinifine aid deyisen
    string university;

public:

    // ================= CONSTRUCTOR =================
    // name parent class-a gonderilir.
    // university ise bu sinifde saxlanilir.
    GraduateStudent(string name, string university)
        : Student(name)
    {
        this->university = university;
    }

    // ================= POLYMORPHISM =================
    // Student sinifindeki abstrakt metod burada implement olunur.
    void showInfo()
    {
        cout << "Name: "
             << getName()
             << endl;

        cout << "University: "
             << university
             << endl;
    }
};

// ================= MULTILEVEL INHERITANCE =================
// PhDStudent sinifi GraduateStudent sinifinden miras alir.
// Zencir:
// Student -> GraduateStudent -> PhDStudent
class PhDStudent : public GraduateStudent
{
private:

    // PhDStudent sinifine aid deyisen
    string researchTopic;

public:

    // ================= CONSTRUCTOR =================
    // name ve university parent class-a gonderilir.
    // researchTopic ise bu sinifde saxlanilir.
    PhDStudent(
        string name,
        string university,
        string researchTopic
    )
        : GraduateStudent(name, university)
    {
        this->researchTopic = researchTopic;
    }

    // ================= METHOD OVERRIDING =================
    // Parent class-daki showInfo() yeniden yazilir.
    void showInfo()
    {
        // Parent class metodunu cagirir.
        GraduateStudent::showInfo();

        // Elave melumat cixis olunur.
        cout << "Research Topic: "
             << researchTopic
             << endl;
    }
};

int main()
{
    // ================= GRADUATE STUDENT =================

    // Graduate student melumatlari ucun deyisenler
    string graduateName;
    string graduateUniversity;

    // Istifadeciden ad daxil edilir
    cout << "Enter graduate student name: ";
    getline(cin, graduateName);

    // Istifadeciden universitet daxil edilir
    cout << "Enter graduate student university: ";
    getline(cin, graduateUniversity);

    // ================= POLYMORPHISM =================
    // Student tipli pointer GraduateStudent obyektine isare edir.
    Student* graduateStudent =
        new GraduateStudent(
            graduateName,
            graduateUniversity
        );

    cout << endl;

    cout << "Graduate Student Information"
         << endl;

    // Runtime zamani uygun metod cagrilir.
    graduateStudent->showInfo();

    cout << endl;

    // ================= PHD STUDENT =================

    // PhD student melumatlari ucun deyisenler
    string phdName;
    string phdUniversity;
    string phdResearchTopic;

    // Istifadeciden ad daxil edilir
    cout << "Enter PhD student name: ";
    getline(cin, phdName);

    // Istifadeciden universitet daxil edilir
    cout << "Enter PhD student university: ";
    getline(cin, phdUniversity);

    // Istifadeciden tedqiqat movzusu daxil edilir
    cout << "Enter PhD student research topic: ";
    getline(cin, phdResearchTopic);

    // ================= POLYMORPHISM =================
    // Student tipli pointer PhDStudent obyektine isare edir.
    Student* phdStudent =
        new PhDStudent(
            phdName,
            phdUniversity,
            phdResearchTopic
        );

    cout << endl;

    cout << "PhD Student Information"
         << endl;

    // Override olunan metod cagrilir.
    phdStudent->showInfo();

    // ================= MEMORY CLEANUP =================
    // Dynamic olaraq ayrilan yaddas temizlenir.
    delete graduateStudent;
    delete phdStudent;

    return 0;
}



//--------------------------------------------------------------
// C++ OOP nümunəsi — Abstrakt sinif, Encapsulation,
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