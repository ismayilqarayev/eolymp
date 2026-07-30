/*
    Movzu 1 - For dovru - 4x4 şahmat lövhəsi naxışı

    Mesele: N verilib. N x N ölçülü şahmat lövhəsi naxışı çap edin (növbə ilə * və . simvolları).

    Numune giris: 4
    Numune cixis: *.*. / .*.* / *.*. / .*.*

    Yanasma: İç-içə for dövründə (i+j) cüt olduqda "*", tək olduqda "." çap olunur — bu, sətir və sütun nömrələrinin cəminə görə növbələşmə yaradır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((i+j) % 2 == 0) cout << "*"; else cout << ".";
        }
        cout << "\n";
    }
}
