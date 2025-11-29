/*
Almaları bölüşdürmə - 1
Zaman limiti: 1,0 saniyə

Yaddaş limiti: 128 MiB
n məktəbli k almanı bərabər bölüşdürür, bölünməyən isə zənbildə qalır. Hər bir məktəbliyə neçə alma çatacaq?

Giriş verilənləri
İki tam n və k ədədləri verilir. Bütün giriş verilənləri 1500-ü aşmır – məktəbdə az hallarda çox şagird olur, çox alma yemək də zərərlidir…

Çıxış verilənləri
Yeganə ədədi - hər bir şagirdə çatacaq almaların sayını verin.
*/

/*Həlli*/

#include <iostream>
using namespace std;

int main() 
{
    int n, k;

    // n - məktəblilərin sayı
    // k - almaların ümumi sayı
    cin >> n >> k;

    // Hər bir şagirdə düşən alma sayını hesablayırıq
    // Bərabər bölüşdürmə: k / n
    int result = k / n;

    // Nəticəni ekrana çıxarırıq
    cout << result;

    return 0;
}
