/*
    Movzu 1 - If/Switch - 650 azn alışa endirim faizi

    Mesele: Alış məbləği verilib. Endirim faizini tapın: 500+ 20%, 200-499 10%, 100-199 5%, aşağı 0%.

    Numune giris: 650
    Numune cixis: 20

    Yanasma: if/else if zənciri ilə məbləğ ən yüksək hədddən başlayaraq ardıcıl yoxlanılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int amount; cin >> amount;
    if (amount >= 500) cout << 20 << "\n";
    else if (amount >= 200) cout << 10 << "\n";
    else if (amount >= 100) cout << 5 << "\n";
    else cout << 0 << "\n";
}
