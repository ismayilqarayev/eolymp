/*
    Movzu 1 - If/Switch - 14 ədədinin cüt/tək olması

    Mesele: Tam ədəd N verilib. Cüt yoxsa tək olduğunu müəyyən edin.

    Numune giris: 14
    Numune cixis: CÜT

    Yanasma: if (n % 2 == 0) şərti doğrudursa cüt, əks halda (else) tək hesab olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if (n % 2 == 0) cout << "C\u00dcT\n";
    else cout << "T\u018fK\n";
}
