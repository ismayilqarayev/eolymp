// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Massivlər və Orta Qiymətin Hesablanması
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədin ortalamasını hesablayın və nəticəni
// "Orta: ..." formatında çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Birinci sətirdə n tam ədədi (1 ≤ n ≤ 10^5)
// - İkinci sətirdə n tam ədəd verilir
//
// Çıxış verilənləri:
// - Verilmiş ədədlərin ortalaması, "Orta: ..." formatında.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 5
// 2 4 6 8 10
//
// Çıxış:
// Orta: 6
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
// - "Orta:" sözündən sonra boşluq qoyulmalı və nəticə yazılmalıdır.
// - Orta qiymət tam ədəd kimi hesablanmalıdır (tam bölmə).
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

    int average = sum / n; // tam bölmə ilə orta hesablanır
    cout << "Orta: " << average << endl;

    return 0;
}

