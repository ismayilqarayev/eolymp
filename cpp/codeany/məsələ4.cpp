/*
Almaları bölüşdürmə – 2

Zaman limiti: 1.0 saniyə
Yaddaş limiti: 128 MiB

n məktəbli k almanı bərabər bölüşdürür. Bölüşdürülməyən almalar isə səbətdə qalır. Səbətdə neçə alma qalacağını tapın.

Giriş verilənləri

İki tam ədəd — n və k verilir. Giriş verilənlərinin hər biri 1500-ü aşmır (məktəbdə nadir hallarda çox şagird olur və belə böyük səbəti tapmaq çətindir).

Çıxış verilənləri

Proqram yeganə ədədi — səbətdə qalan almaların sayını ekrana çıxarmalıdır.
*/

#include <iostream>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k; // n - məktəblərin sayı, k - almaların sayı

    // Səbətdə qalan almalar k % n ifadəsi ilə tapılır
    // Çünki k almanı n məktəbli arasında bərabər bölürük
    // Qalan isə səbətdə qalır
    cout << k % n;

    return 0;
}
