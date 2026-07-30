/*
    Movzu 1 - Deyisen/Tip/Operator - 1999999999 + 1999999999 (int overflow nümunəsi)

    Mesele: İki böyük tam ədəd verilib. Onları int tipində (32 bit) toplasaq, nəticə nə olar? (overflow baş verə bilər)

    Numune giris: 1999999999 1999999999
    Numune cixis: -294967298

    Yanasma: int tipi təxminən ±2.1 milyarda qədər dəyər saxlaya bilir. Bu hədd aşıldıqda nəticə "dövrə vurur" (wrap around) və mənfi və ya gözlənilməz bir ədədə çevrilir — buna görə böyük ədədlərlə işləyərkən long long istifadə etmək lazımdır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int sum = a + b;
    cout << sum << "\n";
}
