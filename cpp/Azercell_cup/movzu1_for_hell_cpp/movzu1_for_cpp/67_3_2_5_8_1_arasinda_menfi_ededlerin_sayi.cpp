/*
    Movzu 1 - For dovru - {3, -2, 5, -8, 1} arasında mənfi ədədlərin sayı

    Mesele: N ədəd verilib. Onların arasında neçə mənfi ədəd olduğunu tapın.

    Numune giris: 5 / 3 -2 5 -8 1
    Numune cixis: 2

    Yanasma: for dövrü ilə hər ədəd oxunur, if (x < 0) şərti ilə mənfi olub-olmadığı yoxlanılır, doğrudursa sayğac artırılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x < 0) cnt++;
    }
    cout << cnt << "\n";
}
