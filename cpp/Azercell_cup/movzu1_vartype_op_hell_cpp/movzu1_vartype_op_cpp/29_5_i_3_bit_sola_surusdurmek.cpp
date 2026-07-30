/*
    Movzu 1 - Deyisen/Tip/Operator - 5-i 3 bit sola sürüşdürmək

    Mesele: Tam ədəd N və K verilib. N-i K bit sola sürüşdürün.

    Numune giris: 5 3
    Numune cixis: 40

    Yanasma: << operatoru bit sürüşməsi aparır — sola sürüşmə hər addımda ədədi 2-yə vurmağa, sağa sürüşmə isə 2-yə bölməyə (tam hissə) bərabərdir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k; cin >> n >> k;
    cout << (n << k) << "\n";
}
