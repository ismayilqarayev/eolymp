// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: ƏBOB (GCD) və Dövrlər
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş iki tam ədədin Ən Böyük Ortak Bölənini (ƏBOB, GCD) tapın
// və nəticəni çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Birinci sətirdə iki tam ədəd a və b (1 ≤ a, b ≤ 10^9)
//
// Çıxış verilənləri:
// - a və b ədədlərinin ƏBOB-u (GCD)
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 36 60
//
// Çıxış:
// 12
//
// ---------------------------------------------------------------
// Qeyd:
// - ƏBOB tapmaq üçün Evklid alqoritmindən istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
using namespace std;

// Evklid alqoritmi ilə ƏBOB tapmaq
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int qaliq = a % b;
        a = b;
        b = qaliq;
    }
    return a;
}

int main() 
{
    int a, b;
    cin >> a >> b; // Giriş oxunur

    cout << gcd(a, b) << endl;

    return 0;
}
