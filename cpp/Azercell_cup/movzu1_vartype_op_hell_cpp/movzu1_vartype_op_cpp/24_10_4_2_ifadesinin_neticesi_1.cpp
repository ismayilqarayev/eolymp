/*
    Movzu 1 - Deyisen/Tip/Operator - "(10 - 4) / 2" ifadəsinin nəticəsi

    Mesele: Aşağıdakı riyazi ifadənin C++ qaydalarına görə (vurma/bölmə toplama/çıxmadan əvvəl icra olunur) nəticəsini tapın: (10 - 4) / 2

    Numune giris: (bos)
    Numune cixis: 3

    Yanasma: C++-da * və / əməliyyatları + və --dan əvvəl icra olunur (operator prioriteti); mötərizə isə hər zaman ən öncə hesablanır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << ((10 - 4) / 2) << "\n";
}
