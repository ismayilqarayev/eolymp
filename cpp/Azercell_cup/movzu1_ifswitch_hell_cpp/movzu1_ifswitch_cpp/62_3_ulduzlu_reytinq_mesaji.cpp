/*
    Movzu 1 - If/Switch - 3 ulduzlu reytinq mesajı

    Mesele: Reytinq (1-5 ulduz) verilib. Uyğun mesajı çap edin: 1-Çox pis, 2-Pis, 3-Orta, 4-Yaxşı, 5-Əla.

    Numune giris: 3
    Numune cixis: Orta

    Yanasma: switch (reytinq) konstruksiyası hər ulduz sayı üçün ayrıca case ilə mesajı çap edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int r; cin >> r;
    switch (r){
        case 1: cout << "\u00c7ox pis\n"; break;
        case 2: cout << "Pis\n"; break;
        case 3: cout << "Orta\n"; break;
        case 4: cout << "Yax\u015f\u0131\n"; break;
        case 5: cout << "\u018fla\n"; break;
        default: cout << "Yanl\u0131\u015f reytinq\n";
    }
}
