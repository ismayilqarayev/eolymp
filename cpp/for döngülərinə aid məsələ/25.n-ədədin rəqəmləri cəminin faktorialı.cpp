// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Rəqəmlərlə Əməliyyatlar və Faktorial
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinin rəqəmlərinin cəmini hesablayın.
// Daha sonra bu cəmin faktorialını tapın və nəticələri
// aşağıdakı formatda çap edin:
//
// "Cəm: ..."
// "Faktorial: ..."
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 10^9)
//
// Çıxış verilənləri:
// - Birinci sətirdə rəqəmlərin cəmi
// - İkinci sətirdə həmin cəmin faktorialı
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 123
//
// Çıxış:
// Cəm: 6
// Faktorial: 720
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Faktorial hesablanarkən ayrıca dövr qurulmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
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
    int temp = n;

    // Rəqəmlərin cəmini hesablayırıq
    while (temp > 0) {
        cem += temp % 10;
        temp /= 10;
    }

    // Faktorial hesablanması
    long long faktorial = 1;
    for (int i = 1; i <= cem; i++) {
        faktorial *= i;
    }

    cout << "Cəm: " << cem << endl;
    cout << "Faktorial: " << faktorial << endl;

    return 0;
}
