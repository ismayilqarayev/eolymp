/*
    Movzu 1 - For dovru - 9-in ilk 5 misli

    Mesele: N və K verilib. N-in ilk K müsbət mislini çap edin.

    Numune giris: 9 5
    Numune cixis: 9 18 27 36 45

    Yanasma: for dövrü i=1-dən K-ya qədər gəzir, hər addımda N*i hesablanıb çap olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    for (int i = 1; i <= k; i++){ cout << n*i; if (i != k) cout << " "; }
    cout << "\n";
}
