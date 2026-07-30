/*
    Movzu 1 - For dovru - 10-dan 50-yə qədər 4-ya bölünənlərin sayı

    Mesele: a, b və k verilib. a-dan b-yə qədər (daxil) k-ya bölünən ədədlərin sayını tapın.

    Numune giris: 10 50 4
    Numune cixis: 10

    Yanasma: for dövrü i=a-dan b-yə qədər gəzir, if (i % k == 0) şərti doğru olduqda sayğac artırılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, k; cin >> a >> b >> k;
    int cnt = 0;
    for (int i = a; i <= b; i++) if (i % k == 0) cnt++;
    cout << cnt << "\n";
}
