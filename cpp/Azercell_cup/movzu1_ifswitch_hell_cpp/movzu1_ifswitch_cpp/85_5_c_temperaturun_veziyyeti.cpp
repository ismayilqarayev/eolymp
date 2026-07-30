/*
    Movzu 1 - If/Switch - -5°C temperaturun vəziyyəti

    Mesele: Temperatur (°C) verilib. Vəziyyətini tapın: <0 dondurucu, 0-14 soyuq, 15-24 mülayim, 25+ isti.

    Numune giris: -5
    Numune cixis: DONDURUCU

    Yanasma: if/else if zənciri temperaturu ən aşağı hədddən başlayaraq ardıcıl yoxlayır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    if (t < 0) cout << "DONDURUCU\n";
    else if (t < 15) cout << "SOYUQ\n";
    else if (t < 25) cout << "M\u00dcLAY\u0130M\n";
    else cout << "\u0130ST\u0130\n";
}
