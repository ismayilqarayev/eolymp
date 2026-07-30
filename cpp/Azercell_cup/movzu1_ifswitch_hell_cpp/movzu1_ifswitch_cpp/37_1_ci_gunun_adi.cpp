/*
    Movzu 1 - If/Switch - 1-ci günün adı

    Mesele: Həftənin gün nömrəsi (1-7, 1=Bazar ertəsi) verilib. Uyğun gün adını çap edin.

    Numune giris: 1
    Numune cixis: Bazar ertəsi

    Yanasma: switch (gün) konstruksiyası hər gün nömrəsi üçün ayrıca case ilə uyğun adı çap edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int d; cin >> d;
    switch (d){
        case 1: cout << "Bazar ert\u0259si\n"; break;
        case 2: cout << "\u00c7\u0259r\u015f\u0259nb\u0259 ax\u015fam\u0131\n"; break;
        case 3: cout << "\u00c7\u0259r\u015f\u0259nb\u0259\n"; break;
        case 4: cout << "C\u00fcm\u0259 ax\u015fam\u0131\n"; break;
        case 5: cout << "C\u00fcm\u0259\n"; break;
        case 6: cout << "\u015e\u0259nb\u0259\n"; break;
        case 7: cout << "Bazar\n"; break;
        default: cout << "Yanl\u0131\u015f g\u00fcn\n";
    }
}
