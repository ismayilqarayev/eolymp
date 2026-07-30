/*
    Movzu 1 - Deyisen/Tip/Operator - -2, 4, -2 arasında maksimum (ternar operatorla)

    Mesele: Üç ədəd verilib. Ternar operatordan (?:) istifadə edərək ən böyüyünü tapın.

    Numune giris: -2 4 -2
    Numune cixis: 4

    Yanasma: ?: ternar operatoru if/else-in qısa yazılış formasıdır: şərt ? doğrudursa : yanlışdırsa. Bir neçə ternar operator iç-içə istifadə edilərək üç ədəd arasında müqayisə aparıla bilər.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    int mx = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << mx << "\n";
}
