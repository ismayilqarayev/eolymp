/*
    Movzu 1 - Deyisen/Tip/Operator - 5 elementlik dairəvi sırada 7-ci addımın indeksi

    Mesele: N elementlik dairəvi (circular) sıra və addım nömrəsi i verilib. i-ci addımda hansı indeksdə olduğumuzu tapın (0-dan başlayaraq).

    Numune giris: 5 7
    Numune cixis: 2

    Yanasma: i % N əməliyyatı i-ni N-ə "dairəvi" şəkildə uyğunlaşdırır — i, N-dən böyük olsa belə, nəticə həmişə 0-dan N-1-ə qədər olan diapazonda qalır (dövrü strukturlarda tez-tez istifadə olunur).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i; cin >> n >> i;
    cout << (i % n) << "\n";
}
