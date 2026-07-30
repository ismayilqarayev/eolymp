/*
    Movzu 1 - Deyisen/Tip/Operator - "2 + 3 * 4" ifadəsinin nəticəsi

    Mesele: Aşağıdakı riyazi ifadənin C++ qaydalarına görə (vurma/bölmə toplama/çıxmadan əvvəl icra olunur) nəticəsini tapın: 2 + 3 * 4

    Numune giris: (bos)
    Numune cixis: 14

    Yanasma: C++-da * və / əməliyyatları + və --dan əvvəl icra olunur (operator prioriteti); mötərizə isə hər zaman ən öncə hesablanır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << (2 + 3 * 4) << "\n";
}
