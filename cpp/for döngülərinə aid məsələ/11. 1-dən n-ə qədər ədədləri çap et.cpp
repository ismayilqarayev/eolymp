// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Dövrlər və Çıxış Formatı
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinə görə 1-dən n-ə qədər bütün ədədləri
// ardıcıllıqla, aralarında yalnız bir boşluq olmaqla, bir sətirdə çap edin.
// Çıxışda sonda artıq boşluq olmamalıdır.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 10^5)
//
// Çıxış verilənləri:
// - 1-dən n-ə qədər bütün ədədlər, aralarında boşluq olmaqla,
//   bir sətirdə verilməlidir.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 10
//
// Çıxış:
// 1 2 3 4 5 6 7 8 9 10
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
// - Sonda artıq boşluq və ya əlavə sətir buraxmaq olmaz.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Giriş oxunur

    // 1-dən n-ə qədər dövr
    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " "; // Arada boşluq
        cout << i;              // Ədədi çap et
    }

    return 0;
}
