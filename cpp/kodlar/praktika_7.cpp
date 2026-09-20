#include <iostream>
#include <string>
#include <vector>

using namespace std;


// ============================================================
// USER SINIFI
// ============================================================
//
// Bu sinif bir istifadəçinin məlumatlarını saxlayır:
// - ad
// - yaş
// - telefon
//
// ============================================================

class User
{
private:

    // private olduğu üçün bu dəyişənlərə sinifdən kənarda
    // birbaşa müraciət etmək olmaz.

    string name;
    int age;
    long long phoneNumber;


public:

    // ========================================================
    // CONSTRUCTOR
    // ========================================================
    //
    // Obyekt yaradılan zaman avtomatik işləyir və
    // dəyişənlərə ilkin qiymət verir.
    // ========================================================

    User(string name, int age, long long phoneNumber)
    {
        this->name = name;
        this->age = age;
        this->phoneNumber = phoneNumber;
    }


    // ========================================================
    // GETTERLƏR
    // ========================================================
    //
    // private dəyişənlərin qiymətini oxumaq üçün istifadə
    // olunur.
    // ========================================================

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    long long getPhoneNumber()
    {
        return phoneNumber;
    }


    // ========================================================
    // MELUMAT GOSTER
    // ========================================================
    //
    // İstifadəçinin məlumatlarını ekrana çıxarır.
    // ========================================================

    void print()
    {
        cout << "Ad: " << name << endl;
        cout << "Yas: " << age << endl;
        cout << "Telefon: " << phoneNumber << endl;
    }
};


// ============================================================
// ISTIFADECI ELAVE ETMEK
// ============================================================
//
// Klaviaturadan məlumatları oxuyur və yeni istifadəçini
// siyahının sonuna əlavə edir.
//
// vector<User> &users
//
// Burada & işarəsi siyahının kopyasını yox, özünü göndərir.
// Bu səbəbdən funksiyanın içində siyahını dəyişə bilirik.
// ============================================================

void addUser(vector<User> &users)
{
    string name;
    int age;
    long long phoneNumber;

    // cin.ignore() əvvəlki Enter-i təmizləyir ki,
    // getline() düzgün işləsin.

    cin.ignore();

    cout << "Ad: ";
    getline(cin, name);

    cout << "Yas: ";
    cin >> age;

    cout << "Telefon: ";
    cin >> phoneNumber;

    // Yeni obyekt yaradırıq.

    User newUser(name, age, phoneNumber);

    // Yaradılmış obyekti siyahının sonuna əlavə edirik.

    users.push_back(newUser);

    cout << "Istifadeci elave olundu." << endl;
}


// ============================================================
// ISTIFADECI SILMEK
// ============================================================
//
// Ada görə istifadəçini tapır və siyahıdan silir.
// ============================================================

void removeUser(vector<User> &users)
{
    string name;

    cin.ignore();

    cout << "Silinecek ad: ";
    getline(cin, name);

    bool found = false;

    // Siyahını əvvəldən sona qədər gəzirik.

    for (int i = 0; i < users.size(); i++)
    {
        // Ad eynidirsə, həmin istifadəçini silirik.

        if (users[i].getName() == name)
        {
            // users.begin() + i - i-ci elementin yeri deməkdir.

            users.erase(users.begin() + i);

            found = true;

            cout << "Istifadeci silindi." << endl;

            // Silmə işi bitdi, dövrü dayandırırıq.

            break;
        }
    }

    if (found == false)
    {
        cout << "Bele istifadeci tapilmadi." << endl;
    }
}


// ============================================================
// ISTIFADECI AXTARMAQ
// ============================================================
//
// Ada görə axtarır və tapılan istifadəçini ekrana çıxarır.
// ============================================================

void searchUser(vector<User> &users)
{
    string name;

    cin.ignore();

    cout << "Axtarilan ad: ";
    getline(cin, name);

    bool found = false;

    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].getName() == name)
        {
            users[i].print();

            found = true;
        }
    }

    if (found == false)
    {
        cout << "Bele istifadeci tapilmadi." << endl;
    }
}


// ============================================================
// HAMISINI GOSTERMEK
// ============================================================
//
// Siyahıdakı bütün istifadəçiləri ekrana çıxarır.
// ============================================================

void showAll(vector<User> &users)
{
    // Siyahı boşdursa, mesaj yazıb funksiyadan çıxırıq.

    if (users.size() == 0)
    {
        cout << "Siyahi bosdur." << endl;

        return;
    }

    for (int i = 0; i < users.size(); i++)
    {
        cout << "\n" << i + 1 << "-ci istifadeci:" << endl;

        users[i].print();
    }
}


// ============================================================
// YASA GORE SIRALAMAQ
// ============================================================
//
// Bubble sort (qabarcıq üsulu) ilə istifadəçiləri yaşa görə
// artan sırada düzür.
//
// İki qonşu elementi müqayisə edirik.
// Soldakının yaşı böyükdürsə, onların yerini dəyişirik.
// Bu iş siyahı düzələnə qədər təkrarlanır.
// ============================================================

void sortByAge(vector<User> &users)
{
    for (int i = 0; i < users.size(); i++)
    {
        for (int j = 0; j < users.size() - 1 - i; j++)
        {
            if (users[j].getAge() > users[j + 1].getAge())
            {
                // İki elementin yerini dəyişirik.
                // Bunun üçün müvəqqəti dəyişən lazımdır.

                User temp = users[j];

                users[j] = users[j + 1];

                users[j + 1] = temp;
            }
        }
    }

    cout << "Yasa gore siralandi." << endl;
}


// ============================================================
// MAIN FUNKSIYASI
// ============================================================

int main()
{
    // Bütün istifadəçiləri saxlayan siyahı.

    vector<User> users;

    // Menyudan seçilən rəqəm.

    int choice;


    // ========================================================
    // MENYU DÖVRÜ
    // ========================================================
    //
    // do-while dövrü ən azı bir dəfə işləyir.
    //
    // İstifadəçi 0 seçənə qədər menyu təkrar göstərilir.
    // ========================================================

    do
    {
        cout << "\n===== MENYU =====" << endl;
        cout << "1 - Istifadeci elave et" << endl;
        cout << "2 - Istifadeci sil" << endl;
        cout << "3 - Istifadeci axtar" << endl;
        cout << "4 - Hamisini goster" << endl;
        cout << "5 - Yasa gore sirala" << endl;
        cout << "0 - Cixis" << endl;

        cout << "Seciminiz: ";
        cin >> choice;


        // Seçimə uyğun funksiyanı çağırırıq.

        if (choice == 1)
        {
            addUser(users);
        }
        else if (choice == 2)
        {
            removeUser(users);
        }
        else if (choice == 3)
        {
            searchUser(users);
        }
        else if (choice == 4)
        {
            showAll(users);
        }
        else if (choice == 5)
        {
            sortByAge(users);
        }
        else if (choice == 0)
        {
            cout << "Proqram bitdi." << endl;
        }
        else
        {
            cout << "Yanlis secim." << endl;
        }

    } while (choice != 0);


    return 0;
}
