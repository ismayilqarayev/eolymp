/*
    Movzu 1 - For dovru - 3 sətirlik say üçbucağı

    Mesele: N verilib. 1-ci sətirdə "1", 2-ci sətirdə "12" və s. formasında say üçbucağı çap edin.

    Numune giris: 3
    Numune cixis: 1 / 12 / 123

    Yanasma: Xarici for dövrü sətir nömrəsini, daxili for dövrü isə 1-dən cari sətir nömrəsinə qədər rəqəmləri çap edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++) cout << j;
        cout << "\n";
    }
}
