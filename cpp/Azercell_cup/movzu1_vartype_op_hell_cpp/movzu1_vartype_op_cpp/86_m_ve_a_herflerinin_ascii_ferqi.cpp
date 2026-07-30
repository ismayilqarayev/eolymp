/*
    Movzu 1 - Deyisen/Tip/Operator - 'M' və 'A' hərflərinin ASCII fərqi

    Mesele: İki simvol verilib. Onların ASCII kodları arasındakı fərqi tapın.

    Numune giris: M A
    Numune cixis: 12

    Yanasma: C++-da iki char çıxılanda avtomatik olaraq onların ASCII (tam ədəd) kodları çıxılır — bu, əlifba sırasındakı "məsafəni" tapmaq üçün faydalıdır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    char c1, c2; cin >> c1 >> c2;
    cout << (c1 - c2) << "\n";
}
