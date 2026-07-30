/*
    Movzu 1 - For dovru - {10, 20, 30} massivini tərsinə çap etmək

    Mesele: N ədəddən ibarət massiv verilib. Onu tərs sırada (sondan əvvələ) çap edin.

    Numune giris: 3 / 10 20 30
    Numune cixis: 30 20 10

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
