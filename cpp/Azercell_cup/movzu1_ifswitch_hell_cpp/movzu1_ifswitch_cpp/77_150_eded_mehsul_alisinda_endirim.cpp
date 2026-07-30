/*
    Movzu 1 - If/Switch - 150 ədəd məhsul alışında endirim

    Mesele: Alınan məhsul sayı verilib. Endirim faizini tapın: 100+ ədəd 30%, 50-99 15%, 10-49 5%, aşağı 0%.

    Numune giris: 150
    Numune cixis: 30

    Yanasma: if/else if zənciri miqdarı ən yüksək hədddən başlayaraq ardıcıl yoxlayır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int qty; cin >> qty;
    if (qty >= 100) cout << 30 << "\n";
    else if (qty >= 50) cout << 15 << "\n";
    else if (qty >= 10) cout << 5 << "\n";
    else cout << 0 << "\n";
}
