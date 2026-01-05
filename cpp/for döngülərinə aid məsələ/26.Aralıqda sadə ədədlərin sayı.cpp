// ===============================================================
//                     İ M T A H A N   T A P Ş I R I Q I
// ===============================================================
//
// Mövzu: Sadə ədədlər və Dövrlər
// ---------------------------------------------------------------
// Təsvir:
// Verilmiş iki tam ədəd arasında neçə sadə ədəd olduğunu hesablayın
// və nəticəni çap edin.
//
// ---------------------------------------------------------------
// Giriş verilənləri:
// - Birinci sətirdə iki tam ədəd a və b (a ≤ b)
//
// Çıxış verilənləri:
// - a-dan b-yə qədər olan aralıqda sadə ədədlərin sayı.
//
// ---------------------------------------------------------------
// Nümunə:
// Giriş:
// 10 30
//
// Çıxış:
// 6
//
// ---------------------------------------------------------------
// Qeyd:
// - Sadə ədəd yalnız 1 və özünə bölünən ədəddir.
// - Dövr operatorundan istifadə olunmalıdır.
// - Çıxış formatına ciddi riayət edilməlidir.
//
// ===============================================================
//                     S U A L I N   S O N U
// ===============================================================
#include <iostream>
using namespace std;

// Sadə ədəd yoxlama funksiyası
bool sade(int x) 
{
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) 
    {
        if (x % i == 0) return false;
    }
    return true;
}

int main() 
{
    int a, b;
    cin >> a >> b; // Giriş oxunur

    int say = 0;
    for (int i = a; i <= b; i++) 
    {
        if (sade(i)) say++;
    }

    cout << say << endl;
    return 0;
}
