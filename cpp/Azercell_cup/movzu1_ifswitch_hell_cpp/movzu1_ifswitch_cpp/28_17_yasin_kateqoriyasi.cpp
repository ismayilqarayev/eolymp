/*
    Movzu 1 - If/Switch - 17 yaşın kateqoriyası

    Mesele: Yaş verilib. Uşaq (0-12), yeniyetmə (13-17) yoxsa yetkin (18+) olduğunu müəyyən edin.

    Numune giris: 17
    Numune cixis: YENİYETMƏ

    Yanasma: if (age < 13) ... else if (age < 18) ... else ... zənciri ilə üç yaş kateqoriyası ayırd edilir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int age; cin >> age;
    if (age < 13) cout << "U\u015eAQ\n";
    else if (age < 18) cout << "YEN\u0130YETM\u018f\n";
    else cout << "YETK\u0130N\n";
}
