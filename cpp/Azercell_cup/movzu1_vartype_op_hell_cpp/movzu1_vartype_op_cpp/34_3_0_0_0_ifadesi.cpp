/*
    Movzu 1 - Deyisen/Tip/Operator - (3 != 0) || (0 != 0) ifadəsi

    Mesele: İki ədəd verilib. (a != 0) || (b != 0) məntiqi ifadəsinin nəticəsini tapın.

    Numune giris: 3 0
    Numune cixis: DOĞRU

    Yanasma: || operatoru qısaqapanma (short-circuit) ilə işləyir: &&-də əgər birinci şərt yanlışdırsa, ikincisi yoxlanmadan nəticə yanlış qəbul edilir; ||-də isə birinci doğrudursa, ikinci yoxlanmır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    bool result = (a != 0) || (b != 0);
    cout << (result ? "DO\u011eRU" : "YANLI\u015e") << "\n";
}
