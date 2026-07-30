/*
    Movzu 1 - Deyisen/Tip/Operator - 5 (int) və 2.0 (double) bölməsi

    Mesele: Tam ədəd a və həqiqi ədəd b verilib. a / b ifadəsinin nəticəsini tapın.

    Numune giris: 5 2.0
    Numune cixis: 2.50

    Yanasma: Əgər bölmədə iştirak edən ədədlərdən biri belə double olarsa, C++ avtomatik olaraq digərini də double-a çevirir (tip yüksəlməsi) və nəticə də double olur — kəsr hissəsi itmir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a; double b;
    cin >> a >> b;
    printf("%.2f\n", a / b);
}
