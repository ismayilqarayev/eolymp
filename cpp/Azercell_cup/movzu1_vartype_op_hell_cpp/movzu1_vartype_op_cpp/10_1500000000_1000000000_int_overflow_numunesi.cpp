/*
    Movzu 1 - Deyisen/Tip/Operator - 1500000000 + 1000000000 (int overflow nümunəsi)

    Mesele: İki böyük tam ədəd verilib. Onları int tipində (32 bit) toplasaq, nəticə nə olar? (overflow baş verə bilər)

    Numune giris: 1500000000 1000000000
    Numune cixis: -1794967296

    Yanasma: int tipi təxminən ±2.1 milyarda qədər dəyər saxlaya bilir. Bu hədd aşıldıqda nəticə "dövrə vurur" (wrap around) və mənfi və ya gözlənilməz bir ədədə çevrilir — buna görə böyük ədədlərlə işləyərkən long long istifadə etmək lazımdır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int sum = a + b;
    cout << sum << "\n";
}
