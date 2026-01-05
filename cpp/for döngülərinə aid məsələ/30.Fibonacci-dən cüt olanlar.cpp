// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Fibonacci ardıcıllığı və şərt operatorları
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinə qədər Fibonacci ardıcıllığını hesablayın.
// Sonra yalnız cüt olan Fibonacci ədədlərini çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 50)
//
// Çıxış verilənləri:
// - Fibonacci ardıcıllığının ilk n elementləri içərisində
//   yalnız cüt olan ədədlər, aralarında boşluq qoyularaq.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 10
//
// Çıxış:
// 0 2 8 34
//
// ---------------------------------------------------------------
// Qeyd:
// - Fibonacci ardıcıllığı belə tərif olunur:
//   F0 = 0, F1 = 1, Fn = Fn-1 + Fn-2 (n ≥ 2)
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

    int a = 0, b = 1; // Fibonacci ardıcıllığının ilk iki ədədi: F0 = 0, F1 = 1

    // Dövr vasitəsilə ilk n Fibonacci ədədini hesablayırıq
    for (int i = 1; i <= n; i++) 
    {
        if (a % 2 == 0) 
        { // Əgər ədəd cütdürsə, çap edirik
            cout << a;
            if (i != n) cout << " "; // Arada boşluq qoyuruq
        }
        int c = a + b; // Yeni Fibonacci ədədi hesablanır
        a = b;         // Dəyərləri irəli çəkirik
        b = c;
    }

    return 0;
}
