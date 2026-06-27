// C++ STL nümunəsi — vector, insert, erase, sort, deque
#include <iostream>
#include <vector>

using namespace std;

class Program1
{
private:
    void VectoruCapEt(const vector<int>& v)
    {
        for (int element : v)
            cout << element << " ";

        cout << endl;
    }

public:
    void VectorleriDaxilEt(vector<int>& vector1, vector<int>& vector2)
    {
        int say;

        cout << "Vector1-in element sayini daxil edin: ";
        cin >> say;

        for (int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector1.push_back(element);
        }

        cout << "\nVector2-nin element sayini daxil edin: ";
        cin >> say;

        for (int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector2.push_back(element);
        }
    }

    void VectorEmeliyyatlari(vector<int>& vector1)
    {
        vector1.insert(vector1.begin() + 1, 2, 5);

        cout << "\nInsert emeliyyatindan sonra:\n";
        VectoruCapEt(vector1);

        vector1.erase(vector1.begin() + 1);

        cout << "\nErase emeliyyatindan sonra:\n";
        VectoruCapEt(vector1);
    }
};

class Program2
{
private:
    void VectoruCapEt(const vector<int>& v)
    {
        for (int element : v)
            cout << element << " ";

        cout << endl;
    }

public:
    void UcuncuVectoruDaxilEt(vector<int>& vector3)
    {
        int say;

        cout << "\nVector3-un element sayini daxil edin: ";
        cin >> say;

        for (int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector3.push_back(element);
        }
    }

    void EvveleElementElaveEt(vector<int>& vector3)
    {
        vector3.insert(vector3.begin(), 99);

        cout << "\nEvvele 99 elave edildikden sonra:\n";
        VectoruCapEt(vector3);
    }
};

int main()
{
    vector<int> vector1;
    vector<int> vector2;
    vector<int> vector3;

    Program1 proqram1;
    proqram1.VectorleriDaxilEt(vector1, vector2);
    proqram1.VectorEmeliyyatlari(vector1);

    Program2 proqram2;
    proqram2.UcuncuVectoruDaxilEt(vector3);
    proqram2.EvveleElementElaveEt(vector3);

    return 0;
}


//-------------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Program1;
class Program2;

vector<int> vec1;
vector<int> vec2;
vector<int> vec3;   // deq1-in yerini tutur

class Program1
{
public:
    void fun1(vector<int>* v1, vector<int>* v2)
    {
        int sayi = 0;
        cout << "Vector1-in element sayini daxil edin: ";
        cin >> sayi;

        for (int i = 0; i < sayi; i++)
        {
            int a;
            cout << "Vector1-e element daxil edin: ";
            cin >> a;
            v1->push_back(a);
        }

        int sayi2 = 0;
        cout << "Vector2-nin element sayini daxil edin: ";
        cin >> sayi2;

        for (int i = 0; i < sayi2; i++)
        {
            int a;
            cout << "Vector2-ye element daxil edin: ";
            cin >> a;
            v2->push_back(a);
        }
    }

    void fun2(vector<int>* v1, vector<int>* v2)
    {
        // v1-in 2-ci mövqeyindən başlayaraq 2 ədəd 5 əlavə et
        auto begin = v1->begin();
        v1->insert(begin + 1, 2, 5);

        cout << "\nVector1 (insert sonrasi): ";
        for (auto i : *v1)
        {
            cout << i << " ";
        }
        cout << "\n";

        // 2-ci elementi sil
        v1->erase(v1->begin() + 1);

        cout << "Vector1 (erase sonrasi):  ";
        for (auto i : *v1)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
};

class Program2
{
public:
    // Deque əvəzinə vector istifadə olunur
    // Vector də front/back əməliyyatlarını dəstəkləyir
    void fun3(vector<int>* v)
    {
        int sayi = 0;
        cout << "\nVector3-un element sayini daxil edin: ";
        cin >> sayi;

        for (int i = 0; i < sayi; i++)
        {
            int a;
            cout << "Vector3-e element daxil edin: ";
            cin >> a;
            v->push_back(a);
        }

        cout << "\nVector3: ";
        for (auto i : *v)
        {
            cout << i << " ";
        }
        cout << "\n";

        // Ön tərəfə element əlavə etmək (deque-da push_front var)
        // Vector-da insert ilə eyni nəticə alınır
        if (!v->empty())
        {
            v->insert(v->begin(), 99);
            cout << "Ona 99 elave edildikden sonra: ";
            for (auto i : *v)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    Program1* p1 = new Program1();
    p1->fun1(&vec1, &vec2);
    p1->fun2(&vec1, &vec2);

    Program2* p2 = new Program2();
    p2->fun3(&vec3);

    delete p1;
    delete p2;

    return 0;
}


//------------------------------------------
/////////////////////////////////////////////
/////////////////////////////////////////////
/////////////////////////////////////////////
/////////////////////////////////////////////
//-------------------------------------------
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

//-------------------------------------------------------------
//-------------------------------------------------------------
// C++ OOP nümunəsi — Abstrakt sinif, Encapsulation, Inheritance, Polymorphism
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ================= ABSTRAKT SİNİF =================
// Student abstrakt sinifidir.
// Bu sinifden birbaşa obyekt yaratmaq olmaz.
// Digər siniflər üçün baza rolunu oynayır.
class Student
{
private:

    // ================= İNKAPSULYASİYA =================
    // name private olduğu üçün birbaşa əlçatan deyil.
    // Yalnız getter və setter vasitəsilə istifadə olunur.
    string name;

public:

    // ================= KONSTRUKTORe =================
    // Obyekt yaradılan zaman name dəyərini mənimsədir.
    Student(string name)
    {
        this->name = name;
    }

    // ================= GETTER =================
    // name dəyərini qaytarır.
    string getName()
    {
        return name;
    }

    // ================= SETTER =================
    // name dəyərini dəyişməyə imkan verir.
    void setName(string name)
    {
        this->name = name;
    }

    // ================= XALİS VİRTUAL FUNKSIYA =================
    // Bu metod abstrakt metoddur.
    // Hər uşaq sinif bu metodu override etməlidir.
    virtual void melumatGoster() = 0;

    // ================= VİRTUAL DESTRUKTOR =================
    // Dinamik yaddaş istifadəsində düzgün silinmə üçündür.
    virtual ~Student()
    {
    }
};

// ================= VARISLIK =================
// MagistrTələbəsi sinifi Student sinifindən miras alır.
class MagistrTələbəsi : public Student
{
private:

    // MagistrTələbəsi sinifinə aid dəyişən
    string universitet;

public:

    // ================= KONSTRUKTOR =================
    // name valideyn sinifə göndərilir.
    // universitet isə bu sinifdə saxlanılır.
    MagistrTələbəsi(string name, string universitet)
        : Student(name)
    {
        this->universitet = universitet;
    }

    // ================= POLİMORFİZM =================
    // Student sinifindəki abstrakt metod burada implement olunur.
    void melumatGoster() override
    {
        cout << "Ad: "
             << getName()
             << endl;

        cout << "Universitet: "
             << universitet
             << endl;
    }
};

// ================= ÇOXSƏVİYYƏLİ VARİSLİK =================
// DoctorTələbəsi sinifi MagistrTələbəsi sinifindən miras alır.
// Zəncir: Student -> MagistrTələbəsi -> DoctorTələbəsi
class DoctorTələbəsi : public MagistrTələbəsi
{
private:

    // DoctorTələbəsi sinifinə aid dəyişən
    string tədqiqatMövzusu;

public:

    // ================= KONSTRUKTOR =================
    // name və universitet valideyn sinifə göndərilir.
    // tədqiqatMövzusu isə bu sinifdə saxlanılır.
    DoctorTələbəsi(
        string name,
        string universitet,
        string tədqiqatMövzusu
    )
        : MagistrTələbəsi(name, universitet)
    {
        this->tədqiqatMövzusu = tədqiqatMövzusu;
    }

    // ================= METODun YENİDƏN YAZILMASI =================
    // Valideyn sinifdəki melumatGoster() yenidən yazılır.
    void melumatGoster() override
    {
        // Valideyn sinif metodunu çağırır.
        MagistrTələbəsi::melumatGoster();

        // Əlavə məlumat çıxış olunur.
        cout << "Tədqiqat Mövzusu: "
             << tədqiqatMövzusu
             << endl;
    }
};

int main()
{
    // ================= VECTOR =================
    // Bütün tələbələr bir vector-da saxlanılır.
    // Student* tipli pointer-lər saxlayır (polimorfizm üçün).
    vector<Student*> tələbələr;

    // ================= MAGİSTR TƏLƏBƏLƏRİ =================
    int magistrSayı;
    cout << "Neçə magistr tələbəsi daxil etmək istəyirsiniz? ";
    cin >> magistrSayı;
    cin.ignore();

    for (int i = 0; i < magistrSayı; i++)
    {
        string ad, universitet;

        cout << "\n--- Magistr Tələbəsi #" << (i + 1) << " ---" << endl;

        cout << "Ad daxil edin: ";
        getline(cin, ad);

        cout << "Universitet daxil edin: ";
        getline(cin, universitet);

        // ================= POLİMORFİZM =================
        // MagistrTələbəsi obyekti yaradılır və vector-a əlavə edilir.
        tələbələr.push_back(new MagistrTələbəsi(ad, universitet));
    }

    // ================= DOKTOR TƏLƏBƏLƏRİ =================
    int doktorSayı;
    cout << "\nNeçə doktor tələbəsi daxil etmək istəyirsiniz? ";
    cin >> doktorSayı;
    cin.ignore();

    for (int i = 0; i < doktorSayı; i++)
    {
        string ad, universitet, mövzu;

        cout << "\n--- Doktor Tələbəsi #" << (i + 1) << " ---" << endl;

        cout << "Ad daxil edin: ";
        getline(cin, ad);

        cout << "Universitet daxil edin: ";
        getline(cin, universitet);

        cout << "Tədqiqat mövzusunu daxil edin: ";
        getline(cin, mövzu);

        // ================= POLİMORFİZM =================
        // DoctorTələbəsi obyekti yaradılır və vector-a əlavə edilir.
        tələbələr.push_back(new DoctorTələbəsi(ad, universitet, mövzu));
    }

    // ================= MƏLUMATLARIN GÖSTƏRİLMƏSİ =================
    // Vector-dakı bütün tələbələrin məlumatları çıxış olunur.
    cout << "\n========== BÜTÜN TƏLƏBƏLƏRİN MƏLUMATLARİ ==========" << endl;

    for (int i = 0; i < tələbələr.size(); i++)
    {
        cout << "\n[ Tələbə #" << (i + 1) << " ]" << endl;

        // ================= POLİMORFİZM =================
        // Runtime zamanı uyğun metod çağırılır.
        tələbələr[i]->melumatGoster();
    }

    // ================= YADDAŞIN TƏMİZLƏNMƏSİ =================
    // Vector-dakı bütün dinamik obyektlər silinir.
    for (int i = 0; i < tələbələr.size(); i++)
    {
        delete tələbələr[i];
    }

    // Vector özü avtomatik silinir (stack-də olduğu üçün).
    tələbələr.clear();

    return 0;
}


//-------------------------------------------------------------
// C++ STL nümunəsi — vector, insert, erase, sort, deque
// Bu nümunədə vector və deque istifadə olunur.
// Vector dinamik array-dir, insert və erase əməliyyatlarını dəstəkləyir.
// Deque isə iki tərəfdən element əlavə etməyə imkan verir.
// Qeyd: Deque əvəzinə vector istifadə olunur, çünki C++17-də deque-nun bəzi metodları dəyişmişdir.
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// ============================================================
//  Tələbə məlumat strukturu
// ============================================================
struct Tələbə
{
    string ad;
    string soyad;
    int    id;
    double ortalama;   // GPA
};

// ============================================================
//  TələbəReyestri — əsas sinif
//  Real həyatda bu bir database-ə bağlı olardı,
//  burada sadəlik üçün vector istifadə edirik.
// ============================================================
class TələbəReyestri
{
public:

    // ---- Tələbə əlavə et ----
    void tələbəƏlavəEt()
    {
        Tələbə t;
        cout << "\n--- Yeni Tələbə Qeydiyyatı ---\n";
        cout << "Ad:       "; cin >> t.ad;
        cout << "Soyad:    "; cin >> t.soyad;
        cout << "ID:       "; cin >> t.id;
        cout << "Ortalama: "; cin >> t.ortalama;

        // Eyni ID-li tələbə varsa əlavə etmə
        if (idMövcuddur(t.id))
        {
            cout << "⚠  Bu ID artıq mövcuddur! Tələbə əlavə edilmədi.\n";
            return;
        }

        tələbələr.push_back(t);
        cout << "✓ Tələbə uğurla əlavə edildi.\n";
    }

    // ---- ID-yə görə tələbə sil ----
    void tələbəSil()
    {
        int id;
        cout << "\nSilinəcək tələbənin ID-si: ";
        cin >> id;

        for (int i = 0; i < (int)tələbələr.size(); i++)
        {
            if (tələbələr[i].id == id)
            {
                tələbələr.erase(tələbələr.begin() + i);
                cout << "✓ Tələbə silindi.\n";
                return;
            }
        }
        cout << "⚠  Bu ID-li tələbə tapılmadı.\n";
    }

    // ---- Bütün tələbələri göstər ----
    void hamısınıGöstər() const
    {
        if (tələbələr.empty())
        {
            cout << "\nReyestr boşdur.\n";
            return;
        }

        cout << "\n==============================\n";
        cout << "  Tələbə Siyahısı (" << tələbələr.size() << " nəfər)\n";
        cout << "==============================\n";

        for (int i = 0; i < (int)tələbələr.size(); i++)
        {
            const Tələbə& t = tələbələr[i];
            cout << (i + 1) << ". "
                 << t.ad << " " << t.soyad
                 << "  |  ID: " << t.id
                 << "  |  GPA: " << t.ortalama << "\n";
        }
    }

    // ---- ID-yə görə axtar ----
    void axtar() const
    {
        int id;
        cout << "\nAxtarılacaq ID: ";
        cin >> id;

        for (int i = 0; i < (int)tələbələr.size(); i++)
        {
            if (tələbələr[i].id == id)
            {
                const Tələbə& t = tələbələr[i];
                cout << "\n--- Tapıldı ---\n";
                cout << "Ad:       " << t.ad    << " " << t.soyad << "\n";
                cout << "ID:       " << t.id      << "\n";
                cout << "Ortalama: " << t.ortalama << "\n";
                return;
            }
        }
        cout << "⚠  Tələbə tapılmadı.\n";
    }

    // ---- GPA-ya görə sırala (yüksəkdən aşağıya) ----
    void gpayaGörəSırala()
    {
        for (int i = 0; i < (int)tələbələr.size() - 1; i++)
        {
            for (int j = i + 1; j < (int)tələbələr.size(); j++)
            {
                if (tələbələr[j].ortalama > tələbələr[i].ortalama)
                {
                    Tələbə temp   = tələbələr[i];
                    tələbələr[i]  = tələbələr[j];
                    tələbələr[j]  = temp;
                }
            }
        }
        cout << "✓ Tələbələr GPA-ya görə sıralandı.\n";
        hamısınıGöstər();
    }

    // ---- Ən yüksək GPA-lı tələbəni göstər ----
    void ənYaxşıTələbə() const
    {
        if (tələbələr.empty())
        {
            cout << "Reyestr boşdur.\n";
            return;
        }

        int ən = 0;
        for (int i = 1; i < (int)tələbələr.size(); i++)
        {
            if (tələbələr[i].ortalama > tələbələr[ən].ortalama)
                ən = i;
        }

        const Tələbə& t = tələbələr[ən];
        cout << "\n🏆 Ən yüksək GPA: "
             << t.ad << " " << t.soyad
             << "  (GPA: " << t.ortalama << ")\n";
    }

private:

    vector<Tələbə> tələbələr;

    // Köməkçi: ID mövcuddurmu?
    bool idMövcuddur(int id) const
    {
        for (int i = 0; i < (int)tələbələr.size(); i++)
        {
            if (tələbələr[i].id == id)
                return true;
        }
        return false;
    }
};

// ============================================================
//  Menyunu çap et
// ============================================================
void menyuGöstər()
{
    cout << "\n====== Universitet Reyestri ======\n";
    cout << "1. Tələbə əlavə et\n";
    cout << "2. Tələbə sil\n";
    cout << "3. Bütün tələbələri göstər\n";
    cout << "4. ID-yə görə axtar\n";
    cout << "5. GPA-ya görə sırala\n";
    cout << "6. Ən yaxşı tələbə\n";
    cout << "0. Çıx\n";
    cout << "Seçim: ";
}

// ============================================================
//  main
// ============================================================
int main()
{
    TələbəReyestri reyestr;
    int seçim;

    do
    {
        menyuGöstər();
        cin >> seçim;

        switch (seçim)
        {
            case 1: reyestr.tələbəƏlavəEt();      break;
            case 2: reyestr.tələbəSil();           break;
            case 3: reyestr.hamısınıGöstər();      break;
            case 4: reyestr.axtar();               break;
            case 5: reyestr.gpayaGörəSırala();     break;
            case 6: reyestr.ənYaxşıTələbə();       break;
            case 0: cout << "Görüşənədək!\n";      break;
            default: cout << "Yanlış seçim.\n";    break;
        }

    } while (seçim != 0);

    return 0;
}
