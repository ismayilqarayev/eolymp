/*
    Movzu 1 - For dovru - {1, 2, 3, 4, 5} massivini tərsinə çap etmək

    Mesele: N ədəddən ibarət massiv verilib. Onu tərs sırada (sondan əvvələ) çap edin.

    Numune giris: 5 / 1 2 3 4 5
    Numune cixis: 5 4 3 2 1

    Yanasma: for dövrü i=N-1-dən (sondan) başlayıb 0-a qədər geriyə gəzir, hər addımda a[i] çap olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n-1; i >= 0; i--){ cout << a[i]; if (i != 0) cout << " "; }
    cout << "\n";
}
