// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Dövrlər və Hesablama
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş n tam ədədinə görə 1-dən n-ə qədər bütün ədədlərin
// cəmini hesablayın və nəticəni "Cəm: ..." formatında çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Bir tam ədəd n (1 ≤ n ≤ 10^5)
//
// Çıxış verilənləri:
// - 1-dən n-ə qədər bütün ədədlərin cəmi, "Cəm: ..." formatında.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 5
//
// Çıxış:
// Cəm: 15
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan və ya uyğun riyazi formuladan istifadə oluna bilər.
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

    int cem = 0;
    for (int i = 1; i <= n; i++) {
        cem += i; // hər ədədi cəmə əlavə et
    }

    cout << "Cəm: " << cem << endl;
    return 0;
}
