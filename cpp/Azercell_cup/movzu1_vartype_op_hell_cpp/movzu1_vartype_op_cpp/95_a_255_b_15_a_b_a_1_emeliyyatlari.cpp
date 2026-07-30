/*
    Movzu 1 - Deyisen/Tip/Operator - a=255, b=15: a &= b; a |= 1; əməliyyatları

    Mesele: a və b verilib. a &= b; sonra a |= 1; əməliyyatlarını ardıcıl tətbiq edib a-nın son dəyərini tapın.

    Numune giris: 255 15
    Numune cixis: 15

    Yanasma: a &= b ifadəsi a = a & b-yə, a |= 1 isə a = a | 1-ə bərabərdir — hər addım əvvəlki nəticə üzərində ardıcıl işləyir, sonuncu əməliyyat isə a-nın ən son bitini mütləq 1 edir (ədədi tək edir).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    a &= b;
    a |= 1;
    cout << a << "\n";
}
