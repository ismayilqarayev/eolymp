/*
    Movzu 1 - Deyisen/Tip/Operator - 64-i 2 bit sağa sürüşdürmək

    Mesele: Tam ədəd N və K verilib. N-i K bit sağa sürüşdürün.

    Numune giris: 64 2
    Numune cixis: 16

    Yanasma: >> operatoru bit sürüşməsi aparır — sola sürüşmə hər addımda ədədi 2-yə vurmağa, sağa sürüşmə isə 2-yə bölməyə (tam hissə) bərabərdir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k; cin >> n >> k;
    cout << (n >> k) << "\n";
}
