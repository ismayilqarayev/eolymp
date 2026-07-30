/*
    Mövzü 3 - 81 və 27 ədədlərinin ƏBOB-u

    Məsələ: İki tam ədəd verilib. Onların ən böyük ortaq bölənini (ƏBOB) tapın.

    Nümunə giriş: 81 27
    Nümunə çıxış: 27

    Yanaşma: Evklid alqoritmi istifadə olunur: while (b){ a %= b; swap(a,b); } dövrü b sıfır olana qədər davam edir, sonda a ƏBOB-dur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    while (b){ a %= b; swap(a, b); }
    cout << a << "\n";
}
