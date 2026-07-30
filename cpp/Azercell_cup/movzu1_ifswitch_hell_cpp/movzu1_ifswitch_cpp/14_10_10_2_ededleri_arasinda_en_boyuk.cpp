/*
    Movzu 1 - If/Switch - 10, 10, 2 ədədləri arasında ən böyük

    Mesele: Üç tam ədəd verilib. Onların ən böyüyünü tapın.

    Numune giris: 10 10 2
    Numune cixis: 10

    Yanasma: if/else if zənciri ilə əvvəlcə a və b müqayisə edilib böyüyü tapılır, sonra bu nəticə c ilə müqayisə edilir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    int mx;
    if (a >= b) mx = a; else mx = b;
    if (c > mx) mx = c;
    cout << mx << "\n";
}
