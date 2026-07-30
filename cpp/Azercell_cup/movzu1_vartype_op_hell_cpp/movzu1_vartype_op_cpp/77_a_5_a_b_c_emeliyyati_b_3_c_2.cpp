/*
    Movzu 1 - Deyisen/Tip/Operator - a=5: a *= (b + c) əməliyyatı (b=3, c=2)

    Mesele: a, b, c verilib. a *= (b + c) əməliyyatını tətbiq edib a-nın son dəyərini tapın.

    Numune giris: 5 3 2
    Numune cixis: 25

    Yanasma: a *= (b + c) ifadəsi a = a * (b + c) ilə eynidir — əvvəlcə mötərizədəki cəm hesablanır, sonra a bu nəticəyə vurulur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    a *= (b + c);
    cout << a << "\n";
}
