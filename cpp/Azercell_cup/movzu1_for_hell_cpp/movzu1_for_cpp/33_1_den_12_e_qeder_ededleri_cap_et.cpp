/*
    Movzu 1 - For dovru - 1-dən 12-ə qədər ədədləri çap et

    Mesele: Tam ədəd N verilib. 1-dən N-ə qədər bütün ədədləri boşluqla ayırıb çap edin.

    Numune giris: 12
    Numune cixis: 1 2 3 4 5 6 7 8 9 10 11 12

    Yanasma: for dövrü i=1-dən N-ə qədər gəzir, hər addımda i çap olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){ cout << i; if (i != n) cout << " "; }
    cout << "\n";
}
