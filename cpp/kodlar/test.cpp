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





