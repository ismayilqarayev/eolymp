/*
    Movzu 1 - Deyisen/Tip/Operator - x=10 olduqda (x++) + (++x) ifadəsi

    Mesele: x dəyişəni verilib. (x++) + (++x) ifadəsinin nəticəsini tapın.

    Numune giris: 10
    Numune cixis: 22

    Yanasma: x++ (post-artırma) əvvəlcə köhnə dəyəri qaytarır, sonra x-i 1 artırır. ++x (pre-artırma) isə əvvəlcə x-i artırır, sonra yeni dəyəri qaytarır. Bu iki fərqli davranışın toplanması diqqətli hesablama tələb edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    int result = (x++) + (++x);
    cout << result << "\n";
}
