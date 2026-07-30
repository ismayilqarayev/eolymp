/*
    Movzu 1 - If/Switch - 30°C üçün geyim tövsiyəsi

    Mesele: Hava temperaturu verilib. Uyğun geyim tövsiyəsini çap edin: <5 palto, 5-14 kurtka, 15-24 sviter, 25+ yüngül geyim.

    Numune giris: 30
    Numune cixis: YÜNGÜL GEYİN

    Yanasma: if/else if zənciri temperaturu ardıcıl hədlərlə müqayisə edərək uyğun tövsiyəni seçir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    if (t < 5) cout << "PALTO GEY\n";
    else if (t < 15) cout << "KURTKA GEY\n";
    else if (t < 25) cout << "SV\u0130TER GEY\n";
    else cout << "Y\u00dcNG\u00dcL GEY\u0130N\n";
}
