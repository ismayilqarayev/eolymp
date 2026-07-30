/*
    Movzu 1 - If/Switch - 7 ədədinin işarəsi

    Mesele: Tam ədəd N verilib. Onun müsbət, mənfi, yoxsa sıfır olduğunu müəyyən edin.

    Numune giris: 7
    Numune cixis: MÜSBƏT

    Yanasma: if (n > 0) ... else if (n < 0) ... else ... quruluşu ilə üç vəziyyət yoxlanılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if (n > 0) cout << "M\u00dcSB\u018fT\n";
    else if (n < 0) cout << "M\u018fNF\u0130\n";
    else cout << "SIFIR\n";
}
