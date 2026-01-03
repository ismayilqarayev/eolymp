// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Massivlər və Minimumun Tapılması
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədəd arasında minimum ədədi tapın və nəticəni
// "Minimum: ..." formatında çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Birinci sətirdə n tam ədədi (1 ≤ n ≤ 10^5)
// - İkinci sətirdə n tam ədəd verilir
//
// Çıxış verilənləri:
// - Verilmiş ədədlər arasında minimum ədəd, "Minimum: ..." formatında.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 5
// 12 7 25 3 18
//
// Çıxış:
// Minimum: 3
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
// - "Minimum:" sözündən sonra boşluq qoyulmalı və nəticə yazılmalıdır.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Giriş oxunur

    int minVal;
    cin >> minVal; // İlk ədədi oxuyuruq və minimum kimi götürürük

    for (int i = 2; i <= n; i++) {
        int x;
        cin >> x;
        if (x < minVal) {
            minVal = x; // daha kiçik ədəd tapılarsa, minimum yenilənir
        }
    }

    cout << "Minimum: " << minVal << endl;
    return 0;
}
