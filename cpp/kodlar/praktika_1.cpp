//--------------------------------------------------------------
//praktika_1.cpp

#include <iostream>

using namespace std;

int main()
{
	
    string ad, soyad;
    int yas;

    cout << "ad daxil et: ";
    cin >> ad;

    cout << "soyad daxil et: ";
    cin >> soyad;

    cout << "yas daxil et: ";
    cin >> yas;

    cout << "\nAd: " << ad << "\nSoyad: " << soyad << "\nYas: " << yas << endl;

    return 0;
}



//--------------------------------------------------------------
//praktika_2.cpp

// C++ STL nümunəsi — vector, insert, erase, sort, deque
#include <iostream>
#include <vector>
// #include <algorithm> // sort üçün

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

//--------------------------------------------------------------
//praktika_2.cpp

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

//--------------------------------------------------------------
//praktika_3.cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Program1
{
    public:
    void VectorleriDaxilEt(vector<int>& vector1, vector<int>& vector2, vector<int>& vector3)
    {
        // Vector1 üçün elementləri daxil etmək
        int say;
        cout << "Vector1-in element sayini daxil edin: ";
        cin >> say;

        for(int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector1.push_back(element);
        }

        // Vector2 üçün elementləri daxil etmək
        cout << "\nVector2-nin element sayini daxil edin: ";
        cin >> say;

        for(int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector2.push_back(element);
        }

        // Vector3 üçün elementləri daxil etmək
        cout << "\nVector3-un element sayini daxil edin: ";
        cin >> say;

        for(int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector3.push_back(element);
        }
    }

    void EvveleElementElaveEt(vector<int>& vector1, vector<int>& vector2, vector<int>& vector3)
    {
        vector1.insert(vector1.begin(), 1);

        cout << "\nVector1-in 1-ci elementini daxil etdikden sonra:\n";
        VectoruCapEt(vector1, vector2, vector3);
    }

    private:
    void VectoruCapEt(const vector<int>& vector1, const vector<int>& vector2, const vector<int>& vector3)
    {
        cout << "Vector1: ";
        for(int i = 0; i < vector1.size(); i++)
        {
            cout << vector1[i] << " ";
        }
        cout << endl;

        cout << "Vector2: ";
        for(int i = 0; i < vector2.size(); i++)
        {
            cout << vector2[i] << " ";
        }
        cout << endl;

        cout << "Vector3: ";
        for(int i = 0; i < vector3.size(); i++)
        {
            cout << vector3[i] << " ";
        }
        cout << endl;
    }
    
};

int main()
{
    vector <int> vector1;
    vector <int> vector2;
    vector <int> vector3;

    Program1 program1;
    program1.VectorleriDaxilEt(vector1, vector2, vector3);
    program1.EvveleElementElaveEt(vector1, vector2, vector3);
    
}

//--------------------------------------------------------------
//praktika_4.cpp

#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// Vektoru ekrana çap edir.
template <typename T>
void vektoruCapEt(const vector<T>& vektor) {
    for (size_t i = 0; i < vektor.size(); ++i) {
        cout << vektor[i];
        if (i + 1 < vektor.size()) {
            cout << " ";
        }
    }
    cout << '\n';
}

// Ədədin sadə olub-olmadığını yoxlayır.
bool sadeEdeddir(int eded) {
    if (eded < 2) return false;
    if (eded == 2) return true;
    if (eded % 2 == 0) return false;

    for (int i = 3; i * i <= eded; i += 2) {
        if (eded % i == 0) return false;
    }
    return true;
}

// Faktorialı hesablamaq üçün dövr üsulundan istifadə edir.
long long faktorial(int eded) {
    if (eded < 0) return -1;

    long long netice = 1;
    for (int i = 2; i <= eded; ++i) {
        netice *= i;
    }
    return netice;
}

// İki ədədin ən böyük ortaq bölənini hesablayır.
int eBob(int a, int b) {
    while (b != 0) {
        int muveqqeti = b;
        b = a % b;
        a = muveqqeti;
    }
    return a;
}

// İki ədədin ən kiçik ortaq qatını hesablayır.
long long eKoq(int a, int b) {
    return static_cast<long long>(a) / eBob(a, b) * b;
}

// Sıralanmış massivdə ikili axtarış aparır.
int ikiliAxtaris(const vector<int>& massiv, int hedef) {
    int sol = 0;
    int sag = static_cast<int>(massiv.size()) - 1;

    while (sol <= sag) {
        int orta = sol + (sag - sol) / 2;
        if (massiv[orta] == hedef) return orta;
        if (massiv[orta] < hedef) sol = orta + 1;
        else sag = orta - 1;
    }
    return -1;
}

// Mətnin tərsini qaytarır.
string metniTersCevir(const string& metn) {
    string netice = metn;
    reverse(netice.begin(), netice.end());
    return netice;
}

// Mətnin palindrom olub-olmadığını yoxlayır.
bool palindromdur(const string& metn) {
    int sol = 0;
    int sag = static_cast<int>(metn.size()) - 1;

    while (sol < sag) {
        if (metn[sol] != metn[sag]) return false;
        ++sol;
        --sag;
    }
    return true;
}

// İkiölçülü vektoru birölçülü vektora çevirir.
template <typename T>
vector<T> vektoruBirlesdir(const vector<vector<T>>& matris) {
    vector<T> netice;
    for (const auto& setir : matris) {
        for (const auto& deyer : setir) {
            netice.push_back(deyer);
        }
    }
    return netice;
}

// Sürətli qüvvətə yüksəltmə ilə esas^quvvet hesablayır.
long long quvvet(long long esas, long long quvvet, long long modul = LLONG_MAX) {
    long long netice = 1;
    esas %= modul;

    while (quvvet > 0) {
        if (quvvet % 2 == 1) netice = netice * esas % modul;
        esas = esas * esas % modul;
        quvvet /= 2;
    }
    return netice;
}

// Vektordakı hər elementin təkrarlanma sayını hesablayır.
template <typename T>
map<T, int> tezlikleriHesabla(const vector<T>& vektor) {
    map<T, int> tezlik;
    for (const auto& element : vektor) {
        ++tezlik[element];
    }
    return tezlik;
}

// Sıralamanı qoruyaraq təkrarlanan elementləri silir.
template <typename T>
vector<T> tekrarlarisizEt(const vector<T>& vektor) {
    set<T> gorulenler;
    vector<T> netice;

    for (const auto& element : vektor) {
        if (gorulenler.insert(element).second) {
            netice.push_back(element);
        }
    }
    return netice;
}

// Mətni verilmiş ayırıcı simvola görə hissələrə bölür.
vector<string> metniBol(const string& metn, char ayirici) {
    vector<string> hisseler;
    string hisse;
    istringstream axin(metn);

    while (getline(axin, hisse, ayirici)) {
        hisseler.push_back(hisse);
    }
    return hisseler;
}

// Vektor elementlərinin cəmini hesablayır.
template <typename T>
T vektorCemi(const vector<T>& vektor) {
    T cem = T();
    for (const auto& element : vektor) {
        cem += element;
    }
    return cem;
}

// Vektordakı ən böyük elementin indeksini qaytarır.
template <typename T>
int maksimumIndeks(const vector<T>& vektor) {
    if (vektor.empty()) return -1;
    return static_cast<int>(max_element(vektor.begin(), vektor.end()) - vektor.begin());
}

// Vektordakı ən kiçik elementin indeksini qaytarır.
template <typename T>
int minimumIndeks(const vector<T>& vektor) {
    if (vektor.empty()) return -1;
    return static_cast<int>(min_element(vektor.begin(), vektor.end()) - vektor.begin());
}

int main() {
    vector<int> ededler = {1, 2, 3, 4, 5};
    vektoruCapEt(ededler);
    return 0;
}





