/*
    Movzu 1 - For dovru - 5x5 ölçülü ulduz kvadratı

    Mesele: N verilib. N sətir və N sütundan ibarət, bütün xanaları ulduz olan kvadrat çap edin.

    Numune giris: 5
    Numune cixis: ***** / ***** / ***** / ***** / *****

    Yanasma: Xarici for dövrü N sətri, daxili for dövrü isə hər sətirdə N ulduzu çap edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) cout << "*";
        cout << "\n";
    }
}
