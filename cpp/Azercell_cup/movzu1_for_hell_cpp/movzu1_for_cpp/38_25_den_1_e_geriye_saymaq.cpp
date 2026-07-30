/*
    Movzu 1 - For dovru - 25-dən 1-ə geriyə saymaq

    Mesele: Tam ədəd N verilib. N-dən 1-ə qədər geriyə sayaraq bütün ədədləri çap edin.

    Numune giris: 25
    Numune cixis: 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1

    Yanasma: for dövründə i=N-dən başlayıb, hər addımda 1 azaldılaraq (i--) 1-ə qədər davam edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = n; i >= 1; i--){ cout << i; if (i != 1) cout << " "; }
    cout << "\n";
}
