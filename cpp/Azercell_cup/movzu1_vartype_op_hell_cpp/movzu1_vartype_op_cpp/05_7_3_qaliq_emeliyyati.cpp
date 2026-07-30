/*
    Movzu 1 - Deyisen/Tip/Operator - -7 % 3 qalıq əməliyyatı

    Mesele: İki tam ədəd verilib. C++-da % (qalıq) əməliyyatının nəticəsini tapın.

    Numune giris: -7 3
    Numune cixis: -1

    Yanasma: C++-da % əməliyyatının işarəsi bölünəndən (a) asılıdır, riyazi mod-dan fərqli ola bilər — məsələn -7 % 3, riyazi olaraq 2 gözlənilsə də, C++-da -1 verir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    cout << a % b << "\n";
}
