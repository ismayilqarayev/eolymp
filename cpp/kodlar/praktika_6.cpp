#include <iostream>
#include <vector>
#include <string>

using namespace std;


// ============================================================
// TELEBE SINIFI
// ============================================================
//
// Bu sinif abstrakt sinifdir.
//
// Telebe sinifindən birbaşa obyekt yaratmaq mümkün deyil.
// Bu sinif digər tələbə sinifləri üçün əsas (baza) sinifdir.
//
// Məsələn:
//
// Telebe
//    |
//    +---- MagistrTelebe
//    |
//    +---- DoktorantTelebe
//
// Burada Telebe ümumi məlumatları saxlayır:
// - ad
// - soyad
// - telefon
// - email
//
// ============================================================

class Telebe
{
private:

    // private yazıldığı üçün bu dəyişənlərə sinifdən
    // kənarda birbaşa müraciət etmək olmaz.
    //
    // Bu, ENCAPSULATION (İnkapsulyasiya) prinsipidir.

    string ad;
    string soyad;
    string telefon;
    string email;


public:

    // ========================================================
    // CONSTRUCTOR
    // ========================================================
    //
    // Konstruktor obyekt yaradılan zaman avtomatik işləyir.
    //
    // Java-da:
    //
    // public Telebe(String ad, String soyad, ...)
    //
    // C++-da:
    //
    // Telebe(string ad, string soyad, ...)
    //
    // Konstruktorun adı sinfin adı ilə eyni olmalıdır.
    // ========================================================

    Telebe(string ad, string soyad, string telefon, string email)
    {
        // this->ad
        //
        // Soldakı "ad" sinifin dəyişənidir.
        //
        // Sağdakı "ad" isə konstruktora göndərilən parametrdir.
        //
        // Yəni:
        //
        // obyektin adını = göndərilən ada

        this->ad = ad;
        this->soyad = soyad;
        this->telefon = telefon;
        this->email = email;
    }


    // ========================================================
    // GETTERLƏR
    // ========================================================
    //
    // Dəyişənlər private olduğu üçün main funksiyasında
    // onlara birbaşa müraciət edə bilmirik.
    //
    // Ona görə məlumatı oxumaq üçün getter istifadə edirik.
    //
    // Məsələn:
    //
    // telebe.getAd()
    //
    // bizə tələbənin adını qaytaracaq.
    // ========================================================

    string getAd()
    {
        return ad;
    }

    string getSoyad()
    {
        return soyad;
    }

    string getTelefon()
    {
        return telefon;
    }

    string getEmail()
    {
        return email;
    }


    // ========================================================
    // SETTERLƏR
    // ========================================================
    //
    // Setter dəyişənin qiymətini dəyişmək üçün istifadə olunur.
    //
    // Məsələn:
    //
    // telebe.setAd("Ali");
    //
    // Bu zaman tələbənin adı dəyişəcək.
    // ========================================================

    void setAd(string ad)
    {
        this->ad = ad;
    }

    void setSoyad(string soyad)
    {
        this->soyad = soyad;
    }

    void setTelefon(string telefon)
    {
        this->telefon = telefon;
    }

    void setEmail(string email)
    {
        this->email = email;
    }


    // ========================================================
    // SAF VIRTUAL FUNKSIYA
    // ========================================================
    //
    // Bu funksiya Telebe sinfində konkret olaraq yazılmır.
    //
    // Hər bir alt sinif bu funksiyanı özü yazmalıdır.
    //
    // C++-da:
    //
    // virtual void melumatGoster() = 0;
    //
    // "= 0" yazılması bu funksiyanın SAF VIRTUAL FUNKSIYA
    // olduğunu göstərir.
    //
    // Bu səbəbdən Telebe abstrakt sinif olur.
    //
    // Java-dakı:
    //
    // public abstract void melumatGoster();
    //
    // ilə eyni məntiqdədir.
    // ========================================================

    virtual void melumatGoster() = 0;


    // ========================================================
    // VIRTUAL DESTRUCTOR
    // ========================================================
    //
    // Obyekti parent sinifin göstəricisi ilə siləndə düzgün
    // şəkildə yaddaşın təmizlənməsi üçün virtual destructor
    // istifadə edirik.
    //
    // Bu proqramda:
    //
    // Telebe* telebe
    //
    // kimi pointerlərdən istifadə etdiyimiz üçün vacibdir.
    // ========================================================

    virtual ~Telebe()
    {
    }
};


// ============================================================
// MAGISTRTELEBE SINIFI
// ============================================================
//
// MagistrTelebe sinfi Telebe sinfindən miras alır.
//
// C++-da:
//
// class MagistrTelebe : public Telebe
//
// Java-dakı:
//
// class MagistrTelebe extends Telebe
//
// ilə eyni məntiqdədir.
//
// Magistr tələbənin ümumi məlumatlarından əlavə universiteti
// də olur.
//
// Telebe
//   |
//   +---- MagistrTelebe
//
// ============================================================

class MagistrTelebe : public Telebe
{
private:

    // Magistr tələbəyə əlavə olan məlumat
    string universitet;


public:

    // ========================================================
    // MAGISTR CONSTRUCTOR
    // ========================================================

    MagistrTelebe(
        string ad,
        string soyad,
        string telefon,
        string email,
        string universitet
    )

        // Burada parent sinifin constructorunu çağırırıq.
        //
        // Telebe sinfinin constructoruna:
        // ad
        // soyad
        // telefon
        // email
        //
        // göndərilir.

        : Telebe(ad, soyad, telefon, email)
    {
        // Universitet isə MagistrTelebe sinfinə aiddir.

        this->universitet = universitet;
    }


    // ========================================================
    // METHOD OVERRIDING
    // ========================================================
    //
    // Telebe sinfində melumatGoster() virtual olaraq elan
    // edilmişdi.
    //
    // Burada həmin funksiyanı yenidən yazırıq.
    //
    // "override" yazmaq kompilyatora bildirir ki:
    //
    // Bu funksiya parent sinifdəki virtual funksiyanı
    // yenidən yazır.
    //
    // Bu POLİMORFİZM-in əsas hissələrindən biridir.
    // ========================================================

    void melumatGoster() override
    {
        cout << "Ad: " << getAd() << endl;

        cout << "Soyad: " << getSoyad() << endl;

        cout << "Telefon: " << getTelefon() << endl;

        cout << "Email: " << getEmail() << endl;

        cout << "Universitet: " << universitet << endl;
    }
};


// ============================================================
// DOKTORANTTELEBE SINIFI
// ============================================================
//
// DoktorantTelebe sinfi MagistrTelebe-dən miras alır.
//
// Yəni:
//
// Telebe
//    |
//    ↓
// MagistrTelebe
//    |
//    ↓
// DoktorantTelebe
//
// Doktorant həm Telebe-dəki, həm də MagistrTelebe-dəki
// xüsusiyyətlərə sahib olur.
//
// Bundan əlavə özünə aid:
//
// tedqiqatMovzusu
//
// dəyişəninə sahibdir.
// ============================================================

class DoktorantTelebe : public MagistrTelebe
{
private:

    // Doktoranta məxsus əlavə məlumat
    string tedqiqatMovzusu;


public:

    // ========================================================
    // DOKTORANT CONSTRUCTOR
    // ========================================================

    DoktorantTelebe(
        string ad,
        string soyad,
        string telefon,
        string email,
        string universitet,
        string tedqiqatMovzusu
    )

        // Burada MagistrTelebe constructorunu çağırırıq.
        //
        // MagistrTelebe öz növbəsində Telebe constructorunu
        // çağıracaq.
        //
        // Beləliklə constructorlar zəncir şəklində işləyir.

        : MagistrTelebe(ad, soyad, telefon, email, universitet)
    {
        this->tedqiqatMovzusu = tedqiqatMovzusu;
    }


    // ========================================================
    // MELUMAT GOSTER FUNKSIYASINI YENIDEN YAZIRIQ
    // ========================================================

    void melumatGoster() override
    {
        // Əvvəlcə parent sinifin funksiyasını çağırırıq.
        //
        // MagistrTelebe::melumatGoster()
        //
        // Bu funksiya:
        // - ad
        // - soyad
        // - telefon
        // - email
        // - universitet
        //
        // məlumatlarını ekrana çıxarır.

        MagistrTelebe::melumatGoster();


        // Sonra DoktorantTelebe-yə məxsus məlumatı
        // əlavə olaraq ekrana çıxarırıq.

        cout << "Tedqiqat movzusu: "
             << tedqiqatMovzusu << endl;
    }
};


// ============================================================
// MAIN FUNKSIYASI
// ============================================================

int main()
{
    // ========================================================
    // VECTOR
    // ========================================================
    //
    // Burada Telebe tipində pointerləri saxlayan vector
    // yaradırıq.
    //
    // vector dinamik massiv kimi işləyir.
    //
    // Adi massiv:
    //
    // Telebe* telebeler[10];
    //
    // yalnız müəyyən sayda element saxlaya bilər.
    //
    // vector isə lazım olduqda öz ölçüsünü artırır.
    //
    // Ən vacib məqam:
    //
    // vector<Telebe*>
    //
    // həm MagistrTelebe, həm də DoktorantTelebe obyektlərini
    // saxlaya bilir.
    //
    // ========================================================

    vector<Telebe*> telebeler;


    // Neçə tələbə daxil ediləcəyini soruşuruq.

    int n;

    cout << "Nece telebe daxil edeceksiniz: ";
    cin >> n;


    // ========================================================
    // cin.ignore()
    // ========================================================
    //
    // cin >> n istifadə etdikdən sonra Enter düyməsi input
    // buferində qala bilər.
    //
    // Daha sonra getline() istifadə etdiyimiz üçün həmin
    // Enter-in problem yaratmaması üçün cin.ignore() yazırıq.
    // ========================================================

    cin.ignore();


    // ========================================================
    // FOR DÖVRÜ
    // ========================================================
    //
    // Daxil ediləcək tələbələrin sayı qədər dövr işləyəcək.
    //
    // Məsələn n = 3 olsa:
    //
    // dövr 3 dəfə işləyəcək.
    // ========================================================

    for (int i = 0; i < n; i++)
    {
        int secim;

        cout << "\n"
             << i + 1
             << "-ci telebe" << endl;


        // Tələbənin tipini seçirik.

        cout << "1 - Magistr" << endl;
        cout << "2 - Doktorant" << endl;

        cout << "Seciminiz: ";
        cin >> secim;

        cin.ignore();


        // ====================================================
        // MÜVƏQQƏTİ DƏYİŞƏNLƏR
        // ====================================================

        string ad;
        string soyad;
        string telefon;
        string email;
        string universitet;
        string movzu;


        // ====================================================
        // MƏLUMATLARIN DAXİL EDİLMƏSİ
        // ====================================================
        //
        // getline() istifadə edirik.
        //
        // Bunun üstünlüyü odur ki, boşluqlu məlumatları da
        // qəbul edə bilir.
        //
        // Məsələn:
        //
        // Azərbaycan Texniki Universiteti
        //
        // ====================================================

        cout << "Ad: ";
        getline(cin, ad);

        cout << "Soyad: ";
        getline(cin, soyad);

        cout << "Telefon: ";
        getline(cin, telefon);

        cout << "Email: ";
        getline(cin, email);

        cout << "Universitet: ";
        getline(cin, universitet);


        // ====================================================
        // MAGISTR
        // ====================================================

        if (secim == 1)
        {
            // Yeni MagistrTelebe obyekti yaradırıq.
            //
            // new operatoru yaddaşda yeni obyekt yaradır.
            //
            // Daha sonra həmin obyektin adresini vector-a
            // əlavə edirik.

            telebeler.push_back(
                new MagistrTelebe(
                    ad,
                    soyad,
                    telefon,
                    email,
                    universitet
                )
            );
        }


        // ====================================================
        // DOKTORANT
        // ====================================================

        else if (secim == 2)
        {
            cout << "Tedqiqat movzusu: ";
            getline(cin, movzu);


            // Doktorant obyektini yaradırıq və vector-a əlavə
            // edirik.

            telebeler.push_back(
                new DoktorantTelebe(
                    ad,
                    soyad,
                    telefon,
                    email,
                    universitet,
                    movzu
                )
            );
        }
    }


    // ========================================================
    // VECTOR-DAKI MƏLUMATLARIN GÖSTƏRİLMƏSİ
    // ========================================================

    cout << "\n\n===== TELEBELER =====" << endl;


    // Vector-un bütün elementlərini bir-bir götürürük.

    for (int i = 0; i < telebeler.size(); i++)
    {
        cout << "\n"
             << i + 1
             << "-ci telebe:" << endl;


        // Burada çox vacib bir məqam var.
        //
        // telebeler[i] Telebe* tipindədir.
        //
        // Amma həmin pointer əslində:
        //
        // MagistrTelebe
        //
        // və ya
        //
        // DoktorantTelebe
        //
        // obyektini göstərə bilər.
        //
        // virtual funksiya sayəsində C++ düzgün
        // melumatGoster() funksiyasını özü seçir.

        telebeler[i]->melumatGoster();
    }


    // ========================================================
    // YADDAŞIN TƏMİZLƏNMƏSİ
    // ========================================================
    //
    // Obyektləri "new" ilə yaratdığımız üçün proqramın sonunda
    // onların yaddaşını "delete" ilə azad etməliyik.
    //
    // Əks halda yaddaş itkisi (memory leak) yarana bilər.
    // ========================================================

    for (int i = 0; i < telebeler.size(); i++)
    {
        delete telebeler[i];
    }


    return 0;
}