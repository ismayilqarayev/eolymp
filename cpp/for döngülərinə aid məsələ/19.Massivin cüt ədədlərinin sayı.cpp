// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Massivlər və Şərt Operatorları
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədəd arasında cüt ədədlərin sayını tapın və
// nəticəni "Cüt ədədlərin sayı: ..." formatında çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Birinci sətirdə n tam ədədi (1 ≤ n ≤ 10^5)
// - İkinci sətirdə n tam ədəd verilir
//
// Çıxış verilənləri:
// - Verilmiş ədədlər arasında cüt ədədlərin sayı,
//   "Cüt ədədlərin sayı: ..." formatında.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 6
// 2 5 7 8 1 4
//
// Çıxış:
// Cüt ədədlərin sayı: 3
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Şərt operatoru ilə yalnız cüt ədədlər seçilməlidir.
// - Çıxış formatına ciddi riayət edilməlidir.
// - "Cüt ədədlərin sayı:" sözündən sonra boşluq qoyulmalı və nəticə yazılmalıdır.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Giriş oxunur

    int countEven = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) { // cüt ədəd şərti
            countEven++;
        }
    }

    cout << "Cüt ədədlərin sayı: " << countEven << endl;
    return 0;
}
