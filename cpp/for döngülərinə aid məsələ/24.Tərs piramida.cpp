// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Dövrlər və Simvol Çapı
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinə görə ulduzlardan ibarət tərs piramida çap edin.
// Birinci sətirdə n ulduz, sonrakı sətirlərdə isə hər dəfə bir ulduz az
// olmaqla çap olunmalıdır.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 50)
//
// Çıxış verilənləri:
// - n sətirdə ulduzlardan ibarət tərs piramida.
// - i-ci sətirdə (n-i+1) sayda ulduz çap olunmalıdır.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 4
//
// Çıxış:
// ****
// ***
// **
// *
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
// - Hər sətirdə yalnız ulduzlar olmalı, artıq boşluq buraxılmamalıdır.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Giriş oxunur

    for (int i = n; i >= 1; i--) { // sətirlər tərsinə
        for (int j = 1; j <= i; j++) {
            cout << "*"; // hər sətirdə i sayda ulduz
        }
        cout << endl; // növbəti sətirə keç
    }

    return 0;
}
