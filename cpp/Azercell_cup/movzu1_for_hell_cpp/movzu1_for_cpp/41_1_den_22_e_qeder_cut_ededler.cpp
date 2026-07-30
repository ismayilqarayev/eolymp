/*
    Movzu 1 - For dovru - 1-dən 22-ə qədər cüt ədədlər

    Mesele: Tam ədəd N verilib. 1-dən N-ə qədər olan bütün cüt ədədləri çap edin.

    Numune giris: 22
    Numune cixis: 2 4 6 8 10 12 14 16 18 20 22

    Yanasma: for dövrü i=2-dən başlayır, hər addımda 2 əlavə olunur (i += 2) — bu üsulla yalnız cüt ədədlər üzərindən keçilir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    bool first = true;
    for (int i = 2; i <= n; i += 2){
        if (!first) cout << " ";
        cout << i; first = false;
    }
    cout << "\n";
}
