// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Dövrlər və Riyazi Hesablama
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinə görə n-in faktoriyelini hesablayın və
// nəticəni "n! = ..." formatında çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 20)
//
// Çıxış verilənləri:
// - n-in faktoriyeli, "n! = ..." formatında.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 6
//
// Çıxış:
// 6! = 720
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
// - "n! =" sözündən sonra boşluq qoyulmalı və nəticə yazılmalıdır.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Giriş oxunur

    long long fakt = 1;
    for (int i = 1; i <= n; i++) {
        fakt *= i; // hər ədədi vururuq
    }

    cout << n << "! = " << fakt << endl;
    return 0;
}
