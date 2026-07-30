/*
    Movzu 1 - For dovru - 6-dən 1-ə geriyə saymaq

    Mesele: Tam ədəd N verilib. N-dən 1-ə qədər geriyə sayaraq bütün ədədləri çap edin.

    Numune giris: 6
    Numune cixis: 6 5 4 3 2 1

    Yanasma: for dövründə i=N-dən başlayıb, hər addımda 1 azaldılaraq (i--) 1-ə qədər davam edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = n; i >= 1; i--){ cout << i; if (i != 1) cout << " "; }
    cout << "\n";
}
