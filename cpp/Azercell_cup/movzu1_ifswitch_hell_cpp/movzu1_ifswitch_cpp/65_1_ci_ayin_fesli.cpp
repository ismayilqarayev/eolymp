/*
    Movzu 1 - If/Switch - 1-ci ayın fəsli

    Mesele: Ay nömrəsi (1-12) verilib. Hansı fəslə aid olduğunu tapın (Az. iqlim: dekabr-fevral qış, mart-may yaz, iyun-avqust yay, sentyabr-noyabr payız).

    Numune giris: 1
    Numune cixis: QIŞ

    Yanasma: switch (ay) konstruksiyasında hər fəslə aid ayların case-ləri bir yerə yığılıb (fall-through) eyni nəticəni çap edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m; cin >> m;
    switch (m){
        case 12: case 1: case 2: cout << "QI\u015e\n"; break;
        case 3: case 4: case 5: cout << "YAZ\n"; break;
        case 6: case 7: case 8: cout << "YAY\n"; break;
        case 9: case 10: case 11: cout << "PAYIZ\n"; break;
        default: cout << "Yanl\u0131\u015f ay\n";
    }
}
