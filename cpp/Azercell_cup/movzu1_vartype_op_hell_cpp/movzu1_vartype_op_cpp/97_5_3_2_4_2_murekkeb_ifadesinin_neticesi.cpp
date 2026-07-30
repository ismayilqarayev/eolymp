/*
    Movzu 1 - Deyisen/Tip/Operator - "5 + 3 * 2 - 4 / 2" mürəkkəb ifadəsinin nəticəsi

    Mesele: Aşağıdakı mürəkkəb ifadənin C++ operator prioriteti qaydalarına görə nəticəsini tapın: 5 + 3 * 2 - 4 / 2

    Numune giris: (bos)
    Numune cixis: 9

    Yanasma: Prioritet sırası: əvvəlcə mötərizələr, sonra *, /, % (soldan sağa), ən sonda + və - (soldan sağa) icra olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << (5 + 3 * 2 - 4 / 2) << "\n";
}
