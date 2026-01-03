// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Dövrlər və Şərt Operatorları
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinə görə 1-dən n-ə qədər bütün cüt ədədlərin
// cəmini hesablayın və nəticəni "Cəm: ..." formatında çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 10^5)
//
// Çıxış verilənləri:
// - 1-dən n-ə qədər bütün cüt ədədlərin cəmi, "Cəm: ..." formatında.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 10
//
// Çıxış:
// Cəm: 30
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Şərt operatoru ilə yalnız cüt ədədlər seçilməlidir.
// - Çıxış formatına ciddi riayət edilməlidir.
// - "Cəm:" sözündən sonra boşluq qoyulmalı və nəticə yazılmalıdır.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Giriş oxunur

    int cem = 0;
    for (int i = 2; i <= n; i += 2) { // yalnız cüt ədədlər
        cem += i;
    }

    cout << "Cəm: " << cem << endl;
    return 0;
}
