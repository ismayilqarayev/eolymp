/*
    Movzu 1 - Deyisen/Tip/Operator - a=15, b=4 ilə compound assignment zənciri

    Mesele: a və b verilib. a += b; a -= 2; a *= 2; əməliyyatlarını ardıcıl tətbiq edib a-nın son dəyərini tapın.

    Numune giris: 15 4
    Numune cixis: 34

    Yanasma: Compound assignment operatorları (+=, -=, *=) ardıcıl olaraq, əvvəlki addımın nəticəsi üzərində işləyir — hər sətir öz növbəsində a-nın CARİ dəyərini dəyişdirir, ona görə ardıcıllıq vacibdir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    a += b;
    a -= 2;
    a *= 2;
    cout << a << "\n";
}
