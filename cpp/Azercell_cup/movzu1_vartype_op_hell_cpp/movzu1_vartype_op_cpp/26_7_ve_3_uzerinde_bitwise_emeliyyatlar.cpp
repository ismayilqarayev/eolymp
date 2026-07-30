/*
    Movzu 1 - Deyisen/Tip/Operator - 7 və 3 üzərində bitwise əməliyyatlar

    Mesele: İki tam ədəd verilib. a AND b, a OR b, a XOR b nəticələrini tapın.

    Numune giris: 7 3
    Numune cixis: 3 7 4

    Yanasma: & (AND), | (OR), ^ (XOR) operatorları ədədlərin ikilik (binary) təsvirləri üzərində bit-bit əməliyyat aparır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    cout << (a & b) << " " << (a | b) << " " << (a ^ b) << "\n";
}
