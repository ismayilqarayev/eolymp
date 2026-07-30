/*
    Mövzü 3 - 21 və 14 ədədlərinin ƏKOB-u

    Məsələ: İki tam ədəd verilib. Onların ən kiçik ortaq bölünəni (ƏKOB) tapın.

    Nümunə giriş: 21 14
    Nümunə çıxış: 42

    Yanaşma: Əvvəlcə ƏBOB Evklid alqoritmi ilə tapılır, sonra ƏKOB = (a / ƏBOB) × b düsturu tətbiq olunur. Əvvəlcə bölmək tam ədəd daşmasının (overflow) qarşısını alır.
*/
#include <bits/stdc++.h>
using namespace std;
long long gcdF(long long a, long long b){
    while (b){ a %= b; swap(a, b); }
    return a;
}
int main(){
    long long a, b; cin >> a >> b;
    long long g = gcdF(a, b);
    cout << (a / g) * b << "\n";
}
