/*
    Movzu 1 - For dovru - 7-in ilk 4 misli

    Mesele: N və K verilib. N-in ilk K müsbət mislini çap edin.

    Numune giris: 7 4
    Numune cixis: 7 14 21 28

    Yanasma: for dövrü i=1-dən K-ya qədər gəzir, hər addımda N*i hesablanıb çap olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    for (int i = 1; i <= k; i++){ cout << n*i; if (i != k) cout << " "; }
    cout << "\n";
}
