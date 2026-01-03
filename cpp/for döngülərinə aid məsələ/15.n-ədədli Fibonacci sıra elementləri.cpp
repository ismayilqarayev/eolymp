// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Dövrlər və Fibonacci Sırası
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinə görə Fibonacci sırasının ilk n elementini
// ardıcıllıqla çap edin. Çıxışda elementlər aralarında yalnız bir
// boşluq olmaqla, bir sətirdə verilməlidir.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 50)
//
// Çıxış verilənləri:
// - Fibonacci sırasının ilk n elementi, aralarında boşluq olmaqla,
//   bir sətirdə verilməlidir.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 7
//
// Çıxış:
// 0 1 1 2 3 5 8
//
// ---------------------------------------------------------------
// Qeyd:
// - Fibonacci sırası belə tərif olunur:
//   F(0) = 0, F(1) = 1,
//   F(k) = F(k-1) + F(k-2) (k ≥ 2).
// - Dövr operatorundan istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
// - Sonda artıq boşluq buraxmaq olmaz.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Giriş oxunur

    long long a = 0, b = 1; // İlk iki element
    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " "; // Arada boşluq
        cout << a;
        long long next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
