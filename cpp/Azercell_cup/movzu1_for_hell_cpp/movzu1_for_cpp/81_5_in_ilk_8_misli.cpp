/*
    Movzu 1 - For dovru - 5-in ilk 8 misli

    Mesele: N və K verilib. N-in ilk K müsbət mislini çap edin.

    Numune giris: 5 8
    Numune cixis: 5 10 15 20 25 30 35 40

    Yanasma: for dövrü i=1-dən K-ya qədər gəzir, hər addımda N*i hesablanıb çap olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    for (int i = 1; i <= k; i++){ cout << n*i; if (i != k) cout << " "; }
    cout << "\n";
}
