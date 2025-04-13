3 Verilmiş sözü tərsinə çevirin.
Giriş: "program"
Çıxış: "margorp"

#include <iostream>   // Ekrana çıxış və klaviaturadan giriş üçün
#include <algorithm>  // reverse funksiyası üçün
using namespace std;

int main() {
    string soz;

    // İstifadəçidən söz daxil etməsini istəyirik
    cout << "Sozu daxil edin: ";
    cin >> soz;

    // reverse funksiyası string-in əvvəlindən sonunadək tərs çevirir
    reverse(soz.begin(), soz.end());

    // Tərs çevrilmiş sözü ekrana çıxarırıq
    cout << "Ters cevrilmis soz: " << soz << endl;

    return 0;
}
