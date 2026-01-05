// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: ƏKOB (LCM) və Evklid Alqoritmi
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş iki tam ədədin Ən Kiçik Ortak Bölünənini (ƏKOB, LCM) tapın
// və nəticəni çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Birinci sətirdə iki tam ədəd a və b (1 ≤ a, b ≤ 10^9)
//
// Çıxış verilənləri:
// - a və b ədədlərinin ƏKOB-u (LCM)
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 6 8
//
// Çıxış:
// 24
//
// ---------------------------------------------------------------
// Qeyd:
// - ƏKOB tapmaq üçün Evklid alqoritmi ilə ƏBOB (GCD) hesablanmalı,
//   sonra LCM = (a * b) / GCD düsturundan istifadə olunmalıdır.
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

    int ebob = gcd(a, b);
    long long ekob = (1LL * a * b) / ebob; // ƏKOB hesablanır

    cout << ekob << endl;

    return 0;
}
