// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Dövrlər və Şərt Operatorları
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş iki tam ədəd arasında bütün ədədləri ardıcıl şəkildə çap edin.
// Çap olunan ədədlər daxil olmaqla başlanğıc və son ədədləri də əhatə etməlidir.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Birinci sətirdə iki tam ədəd a və b (a ≤ b)
//
// Çıxış verilənləri:
// - a-dan b-yə qədər bütün ədədlər, aralarında boşluq qoyularaq.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 3 8
//
// Çıxış:
// 3 4 5 6 7 8
//
// ---------------------------------------------------------------
// Qeyd:
// - Dövr operatorundan istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
// - Ədədlər arasında yalnız bir boşluq qoyulmalıdır.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // Giriş oxunur

    for (int i = a; i <= b; i++) {
        cout << i;
        if (i != b) cout << " "; // Arada boşluq qoyuruq
    }

    return 0;
}
