/*
    Movzu 1 - For dovru - 8 sətirlik tərs ulduz üçbucağı

    Mesele: N verilib. Yuxarıdan aşağı azalan sayda ulduzlardan ibarət tərs üçbucaq çap edin (ilk sətirdə N ulduz, son sətirdə 1 ulduz).

    Numune giris: 8
    Numune cixis: ******** / ******* / ****** / ***** / **** / *** / ** / *

    Yanasma: Xarici for dövrü i=N-dən 1-ə qədər geriyə gəzir, daxili for dövrü hər sətirdə i qədər ulduz çap edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }
}
