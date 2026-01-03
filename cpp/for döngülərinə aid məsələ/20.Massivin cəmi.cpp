// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Massivlər və Dövrlər
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədin cəmini hesablayın və nəticəni
// "Cəm: ..." formatında çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Birinci sətirdə n tam ədədi (1 ≤ n ≤ 10^5)
// - İkinci sətirdə n tam ədəd verilir
//
// Çıxış verilənləri:
// - Verilmiş ədədlərin cəmi, "Cəm: ..." formatında.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 5
// 1 2 3 4 5
//
// Çıxış:
// Cəm: 15
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
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

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x; // hər ədədi cəmə əlavə et
    }

    cout << "Cəm: " << sum << endl;
    return 0;
}
