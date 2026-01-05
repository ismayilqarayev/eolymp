// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Rəqəmlərlə Əməliyyatlar
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinin hər bir rəqəminin kvadratını hesablayın
// və nəticəni ardıcıl şəkildə çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 10^9)
//
// Çıxış verilənləri:
// - n ədədinin rəqəmlərinin kvadratları, aralarında boşluq qoyularaq.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 123
//
// Çıxış:
// 1 4 9
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Rəqəmlər sağdan-sola oxunaraq kvadratları hesablanmalı,
//   sonra düzgün ardıcıllıqla çap edilməlidir.
// - Çıxış formatına ciddi riayət edilməlidir.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string n;
    cin >> n; // Ədədi sətir kimi oxuyuruq

    for (int i = 0; i < n.size(); i++) 
    {
        int reqem = n[i] - '0'; // Simvolu rəqəmə çeviririk
        cout << reqem * reqem;  // Kvadratını hesablayırıq
        if (i != n.size() - 1) cout << " "; // Arada boşluq qoyuruq
    }

    return 0;
}
