// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Massivlər və Maksimumun Tapılması
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədəd arasında maksimum ədədi tapın və nəticəni
// "Maksimum: ..." formatında çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Birinci sətirdə n tam ədədi (1 ≤ n ≤ 10^5)
// - İkinci sətirdə n tam ədəd verilir
//
// Çıxış verilənləri:
// - Verilmiş ədədlər arasında maksimum ədəd, "Maksimum: ..." formatında.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 5
// 12 7 25 3 18
//
// Çıxış:
// Maksimum: 25
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
// - "Maksimum:" sözündən sonra boşluq qoyulmalı və nəticə yazılmalıdır.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Giriş oxunur

    int maxVal;
    cin >> maxVal; // İlk ədədi oxuyuruq və maksimum kimi götürürük

    for (int i = 2; i <= n; i++) {
        int x;
        cin >> x;
        if (x > maxVal) {
            maxVal = x; // daha böyük ədəd tapılarsa, maksimum yenilənir
        }
    }

    cout << "Maksimum: " << maxVal << endl;
    return 0;
}
 