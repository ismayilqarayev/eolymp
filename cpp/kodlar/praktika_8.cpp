#include <iostream>  // cin, cout ucun (giris/cixis)
#include <string>    // string tipi ucun
#include <vector>    // vector (dinamik massiv) ucun
#include <algorithm> // sort, remove_if ucun

using namespace std; // std:: yazmamaq ucun

// Istifadeci melumatlarini saxlayan sinif
class User
{
private: // asagidaki sahelere yalniz sinifin ozu catir
    string name;            // istifadecinin adi
    int age;                // yasi
    long long phone_number; // telefon nomresi (boyuk ededdir, ona gore long long)

public: // asagidakilere her yerden catmaq olar
    // Konstruktor: obyekt yaranarken sahelere qiymet verir
    User(const string &name, int age, long long phone_number)
        : name(name), age(age), phone_number(phone_number) // sahelere ilkin qiymetler
    {
    } // konstruktorun bedeni bosdur, cunki her sey yuxarida edilib

    const string &getName() const { return name; }                // adi qaytarir
    int getAge() const { return age; }                            // yasi qaytarir
    long long getPhoneNumber() const { return phone_number; }     // telefonu qaytarir

    // Istifadecini "ad, yas, telefon" formatinda cap edir
    void print() const
    {
        cout << name << ", " << age << ", " << phone_number << '\n'; // hamisini bir setirde cap edir
    }
};

// Klaviaturadan melumat oxuyub yeni istifadeci elave edir
void addUser(vector<User> &users) // & ile siyahinin ozunu alir, kopyasini yox
{
    string name;    // oxunacaq ad
    int age;        // oxunacaq yas
    long long phone; // oxunacaq telefon

    cout << "Ad: ";       // adi sorusur
    cin >> ws;            // evvelki Enter-den qalan bosluqlari atir
    getline(cin, name);   // butun setri oxuyur (bosluqlu adlar ucun)
    cout << "Yas: ";      // yasi sorusur
    cin >> age;           // yasi oxuyur
    cout << "Telefon: ";  // telefonu sorusur
    cin >> phone;         // telefonu oxuyur

    users.emplace_back(name, age, phone); // obyekti birbasa vector-un sonunda yaradir
    cout << "Elave olundu.\n";            // istifadeciye xeber verir
}

// Verilen ada gore istifadecileri siyahidan silir
void removeUser(vector<User> &users)
{
    string name;                  // silinecek ad
    cout << "Silinecek ad: ";     // adi sorusur
    cin >> ws;                    // artiq bosluqlari atir
    getline(cin, name);           // adi oxuyur

    // remove_if uygun elementleri sona atir ve yeni "son" iteratoru qaytarir
    auto it = remove_if(users.begin(), users.end(),                       // butun siyahi uzre
                        [&](const User &u) { return u.getName() == name; }); // adi eyni olanlari secir

    if (it == users.end()) // it sonda qalibsa, hec nese atilmayib
        cout << "Tapilmadi.\n"; // demeli bele ad yoxdur
    else
    {
        users.erase(it, users.end()); // atilan elementleri real olaraq silir
        cout << "Silindi.\n";         // istifadeciye xeber verir
    }
}

// Ada gore axtarir ve tapilanlari cap edir
void searchUser(const vector<User> &users) // const: siyahini deyismir
{
    string name;                 // axtarilan ad
    cout << "Axtarilan ad: ";    // adi sorusur
    cin >> ws;                   // artiq bosluqlari atir
    getline(cin, name);          // adi oxuyur

    bool found = false;          // tapilib-tapilmadigini xatirlayir
    for (const User &u : users)  // siyahidaki her istifadeciye baxir
    {
        if (u.getName() == name) // adi axtarilanla eynidirse
        {
            u.print();           // istifadecini cap edir
            found = true;        // en azi biri tapildi
        }
    }
    if (!found)                  // hec biri tapilmayibsa
        cout << "Tapilmadi.\n";  // xeber verir
}

// Butun istifadecileri cap edir
void showAll(const vector<User> &users)
{
    if (users.empty())                 // siyahi bosdursa
    {
        cout << "Siyahi bosdur.\n";    // xeber verir
        return;                        // funksiyadan cixir
    }
    for (const User &u : users)        // her istifadeci uzre
        u.print();                     // cap edir
}

// Istifadecileri yasa gore artan sirada duzur
void sortByAge(vector<User> &users)
{
    // lambda: iki istifadecini yaslarina gore muqayise edir
    sort(users.begin(), users.end(),                                          // butun siyahini siralayir
         [](const User &a, const User &b) { return a.getAge() < b.getAge(); }); // kicik yas evvele
    cout << "Yasa gore siralandi.\n";                                         // xeber verir
}

int main()
{
    vector<User> users; // butun istifadecilerin siyahisi
    int choice;         // menyudan secilen reqem

    // 0 secilene qeder menyunu tekrar gosterir
    do
    {
        cout << "\n1. Elave et\n"       // menyunun 1-ci bendi
                "2. Sil\n"              // 2-ci bend
                "3. Axtar\n"            // 3-cu bend
                "4. Hamisini goster\n"  // 4-cu bend
                "5. Yasa gore sirala\n" // 5-ci bend
                "0. Cixis\n"            // cixis bendi
                "Secim: ";              // secim sorusur
        cin >> choice;                  // secimi oxuyur

        switch (choice) // secime gore hereket edir
        {
        case 1: addUser(users); break;    // elave et
        case 2: removeUser(users); break; // sil
        case 3: searchUser(users); break; // axtar
        case 4: showAll(users); break;    // hamisini goster
        case 5: sortByAge(users); break;  // yasa gore sirala
        case 0: cout << "Sag ol!\n"; break; // cixis mesaji
        default: cout << "Yanlis secim.\n"; // menyuda olmayan reqem
        }
    } while (choice != 0); // 0 olmayana qeder dovr davam edir

    return 0; // proqram ugurla bitdi
}
