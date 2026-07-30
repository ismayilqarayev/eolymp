/*
    Movzu 1 - Deyisen/Tip/Operator - "10 % 3 + 2 * 5" mürəkkəb ifadəsinin nəticəsi

    Mesele: Aşağıdakı mürəkkəb ifadənin C++ operator prioriteti qaydalarına görə nəticəsini tapın: 10 % 3 + 2 * 5

    Numune giris: (bos)
    Numune cixis: 11

    Yanasma: Prioritet sırası: əvvəlcə mötərizələr, sonra *, /, % (soldan sağa), ən sonda + və - (soldan sağa) icra olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << (10 % 3 + 2 * 5) << "\n";
}
