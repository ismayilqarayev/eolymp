/*
    Movzu 1 - Deyisen/Tip/Operator - a=8: a *= (b + c) əməliyyatı (b=2, c=5)

    Mesele: a, b, c verilib. a *= (b + c) əməliyyatını tətbiq edib a-nın son dəyərini tapın.

    Numune giris: 8 2 5
    Numune cixis: 56

    Yanasma: a *= (b + c) ifadəsi a = a * (b + c) ilə eynidir — əvvəlcə mötərizədəki cəm hesablanır, sonra a bu nəticəyə vurulur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    a *= (b + c);
    cout << a << "\n";
}
