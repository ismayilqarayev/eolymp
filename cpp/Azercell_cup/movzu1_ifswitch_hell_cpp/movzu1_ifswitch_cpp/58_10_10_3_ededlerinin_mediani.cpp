/*
    Movzu 1 - If/Switch - 10, 10, 3 ədədlərinin medianı

    Mesele: Üç tam ədəd verilib. Onların medianını (ortanca dəyərini) tapın.

    Numune giris: 10 10 3
    Numune cixis: 10

    Yanasma: if/else şərtləri ilə hər ədədin digər ikisi arasında olub-olmadığı yoxlanılır — o ədəd ki, biri ondan kiçik, digəri ondan böyükdür (və ya bərabərdir), median odur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    int med;
    if ((a >= b && a <= c) || (a >= c && a <= b)) med = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a)) med = b;
    else med = c;
    cout << med << "\n";
}
