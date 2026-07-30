/*
    Movzu 1 - For dovru - 1-dən 11-ə qədər tək ədədlər

    Mesele: Tam ədəd N verilib. 1-dən N-ə qədər olan bütün tək ədədləri çap edin.

    Numune giris: 11
    Numune cixis: 1 3 5 7 9 11

    Yanasma: for dövrü i=1-dən başlayır, hər addımda 2 əlavə olunur (i += 2) — beləcə yalnız tək ədədlər üzərindən keçilir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    bool first = true;
    for (int i = 1; i <= n; i += 2){
        if (!first) cout << " ";
        cout << i; first = false;
    }
    cout << "\n";
}
