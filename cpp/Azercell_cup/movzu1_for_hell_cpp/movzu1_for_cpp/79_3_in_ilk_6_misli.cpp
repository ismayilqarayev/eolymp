/*
    Movzu 1 - For dovru - 3-in ilk 6 misli

    Mesele: N və K verilib. N-in ilk K müsbət mislini çap edin.

    Numune giris: 3 6
    Numune cixis: 3 6 9 12 15 18

    Yanasma: for dövrü i=1-dən K-ya qədər gəzir, hər addımda N*i hesablanıb çap olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    for (int i = 1; i <= k; i++){ cout << n*i; if (i != k) cout << " "; }
    cout << "\n";
}
