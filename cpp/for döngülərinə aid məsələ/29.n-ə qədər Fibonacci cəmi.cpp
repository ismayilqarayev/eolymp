// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Fibonacci ardıcıllığı və cəmin hesablanması
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinə qədər Fibonacci ardıcıllığının ədədlərini
// hesablayın və onların cəmini çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 50)
//
// Çıxış verilənləri:
// - Fibonacci ardıcıllığının ilk n ədədinin cəmi
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 7
//
// Çıxış:
// 20
//
// ---------------------------------------------------------------
// Qeyd:
// - Fibonacci ardıcıllığı belə tərif olunur:
//   F1 = 1, F2 = 1, Fn = Fn-1 + Fn-2 (n ≥ 3)
// - Dövr operatorundan istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n; // İstifadəçidən n ədədini oxuyuruq

    // İlk iki Fibonacci ədədi: F1 = 1, F2 = 1
    int a = 1, b = 1;
    int cem = a + b; // İlk iki ədədin cəmi

    // Əgər n = 1 və ya n = 2 olarsa ayrıca yoxlayırıq
    if (n == 1) cem = 1;       // yalnız F1 = 1
    else if (n == 2) cem = 2;  // F1 + F2 = 2
    else 
    {
        // Dövr vasitəsilə qalan Fibonacci ədədlərini hesablayırıq
        for (int i = 3; i <= n; i++) 
        {
            int c = a + b;   // yeni Fibonacci ədədi
            cem += c;        // cəmin üzərinə əlavə edirik
            a = b;           // dəyişənləri irəli çəkirik
            b = c;
        }
    }

    // Nəticəni çap edirik
    cout << cem << endl;

    return 0;
}

