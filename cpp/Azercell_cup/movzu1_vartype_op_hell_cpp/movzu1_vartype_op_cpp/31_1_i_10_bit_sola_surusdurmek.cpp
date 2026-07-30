/*
    Movzu 1 - Deyisen/Tip/Operator - 1-i 10 bit sola sürüşdürmək

    Mesele: Tam ədəd N və K verilib. N-i K bit sola sürüşdürün.

    Numune giris: 1 10
    Numune cixis: 1024

    Yanasma: << operatoru bit sürüşməsi aparır — sola sürüşmə hər addımda ədədi 2-yə vurmağa, sağa sürüşmə isə 2-yə bölməyə (tam hissə) bərabərdir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k; cin >> n >> k;
    cout << (n << k) << "\n";
}
