// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Dövrlər və Simvol Çapı
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinə görə ulduzlardan ibarət piramida çap edin.
// Hər sətirdə sətir nömrəsinə uyğun sayda ulduz olmalıdır.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 50)
//
// Çıxış verilənləri:
// - n sətirdə ulduzlardan ibarət piramida.
// - i-ci sətirdə i sayda ulduz çap olunmalıdır.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 4
//
// Çıxış:
// *
// **
// ***
// ****
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

int main() 
{
    int n;
    cin >> n; // Giriş oxunur

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << "*"; // hər sətirdə i sayda ulduz
        }
        cout << endl; // növbəti sətirə keç
    }

    return 0;
}
