/*
    Movzu 1 - Deyisen/Tip/Operator - 12 və 10 üzərində bitwise əməliyyatlar

    Mesele: İki tam ədəd verilib. a AND b, a OR b, a XOR b nəticələrini tapın.

    Numune giris: 12 10
    Numune cixis: 8 14 6

    Yanasma: & (AND), | (OR), ^ (XOR) operatorları ədədlərin ikilik (binary) təsvirləri üzərində bit-bit əməliyyat aparır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    cout << (a & b) << " " << (a | b) << " " << (a ^ b) << "\n";
}
