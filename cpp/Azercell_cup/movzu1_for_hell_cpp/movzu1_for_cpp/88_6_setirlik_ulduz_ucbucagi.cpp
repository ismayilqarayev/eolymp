/*
    Movzu 1 - For dovru - 6 sətirlik ulduz üçbucağı

    Mesele: N verilib. N sətirlik, hər sətirdə sətir nömrəsi qədər ulduz olan üçbucaq çap edin.

    Numune giris: 6
    Numune cixis: * / ** / *** / **** / ***** / ******

    Yanasma: Xarici for dövrü sətirləri, daxili for dövrü isə həmin sətirdəki ulduz sayını idarə edir (nested for).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }
}
