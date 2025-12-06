/*
Stepanın dostları
Zaman limiti: 1,0 saniyə

Yaddaş limiti: 128 MiB

Stepan məktəblilərin beynəlxalq proqramlaşdırma olimpiadasından (IOI) qayitdı və suvenir kimi 
 müxtəlif rəngli daş gətirdi. Stepan xəsis oğlan deyil, buna görə də daşları dostları ilə bölüşmək qərarına gəldi. Hər bir dostuna bir ədəd daş verdi. Beləliklə, Stepanın özündə də bir ədəd daş qaldı. Onun dostlarının sayını təyin edin.

Giriş verilənləri
Yeganə tam n ( ) ədədi.

Çıxış verilənləri
Yeganə ədədi - Stepanın dostlarınn sayını verin.

Qeydlər
Nümünənin izahatı:
Stepan 2 daş gətirdi, biri özündə qaldı. Deməli ikinci daşı yekanə dostuna verdi.

Nümunələr
Giriş verilənləri nümünəsi #1
2

Çıxış verilənləri nümünəsi #1
1
*/

#include <iostream>
using namespace std;

int main() 
{
    int n;          // Stepanın gətirdiyi daşların sayı
    cin >> n;       // İstifadəçidən giriş oxunur

    int dostlar = n - 1;  // Bir daş özündə qalır, qalan dostlara gedir

    cout << dostlar;      // Dostların sayını çap edirik
    return 0;
}


