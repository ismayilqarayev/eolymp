/*
    Movzu 1 - For dovru - {3, 9, 2, 7} arasında maksimum

    Mesele: N ədəd verilib. Onların ən böyüyünü tapın.

    Numune giris: 4 / 3 9 2 7
    Numune cixis: 9

    Yanasma: maks dəyişəni ilk ədədlə başladılır, for dövrü ilə hər növbəti ədəd maks-la müqayisə edilir, böyükdürsə maks yenilənir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int mx;
    cin >> mx;
    for (int i = 1; i < n; i++){
        int x; cin >> x;
        if (x > mx) mx = x;
    }
    cout << mx << "\n";
}
