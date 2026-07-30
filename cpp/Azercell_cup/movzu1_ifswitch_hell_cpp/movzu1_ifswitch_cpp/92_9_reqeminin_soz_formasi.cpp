/*
    Movzu 1 - If/Switch - 9 rəqəminin söz forması

    Mesele: Tək rəqəm (0-9) verilib. Onu sözlə yazın.

    Numune giris: 9
    Numune cixis: doqquz

    Yanasma: switch (rəqəm) konstruksiyası hər rəqəm üçün ayrıca case ilə söz formasını çap edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int d; cin >> d;
    switch (d){
        case 0: cout << "s\u0131f\u0131r\n"; break;
        case 1: cout << "bir\n"; break;
        case 2: cout << "iki\n"; break;
        case 3: cout << "\u00fc\u00e7\n"; break;
        case 4: cout << "d\u00f6rd\n"; break;
        case 5: cout << "be\u015f\n"; break;
        case 6: cout << "alt\u0131\n"; break;
        case 7: cout << "yeddi\n"; break;
        case 8: cout << "s\u0259kkiz\n"; break;
        case 9: cout << "doqquz\n"; break;
        default: cout << "yanl\u0131\u015f\n";
    }
}
