/*
    Mövzü 4 - C(5,2) — 5 elementdən 2 seçmə

    Məsələ: İki tam ədəd n və k verilib (k ≤ n). n elementdən k elementin neçə fərqli üsulla seçilə biləcəyini (C(n,k)) tapın.

    Nümunə giriş: 5 2
    Nümunə çıxış: 10

    Yanaşma: C(n,k) = n! / (k! × (n−k)!) düsturu tətbiq olunur — əvvəlcə faktorial funksiyası ilə hər üç faktorial hesablanır, sonra düstur üzrə bölünür.
*/
#include <bits/stdc++.h>
using namespace std;
long long fact(int n){
    long long r = 1;
    for (int i = 2; i <= n; i++) r *= i;
    return r;
}
int main(){
    int n, k; cin >> n >> k;
    cout << fact(n) / (fact(k) * fact(n - k)) << "\n";
}
