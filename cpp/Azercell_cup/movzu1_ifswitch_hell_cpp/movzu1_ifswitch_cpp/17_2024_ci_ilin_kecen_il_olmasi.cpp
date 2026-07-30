/*
    Movzu 1 - If/Switch - 2024-ci ilin keçən il olması

    Mesele: İl (year) verilib. Bu ilin keçən (leap) il olub-olmadığını müəyyən edin. Qayda: 4-ə bölünür VƏ 100-ə bölünmür, YA DA 400-ə bölünür.

    Numune giris: 2024
    Numune cixis: KEÇƏNDİR

    Yanasma: if ((y%4==0 && y%100!=0) || y%400==0) şərti ilə həm AND (&&), həm OR (||) məntiqi birləşdirilir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int y; cin >> y;
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) cout << "KE\u00c7\u018fND\u0130R\n";
    else cout << "AD\u0130 \u0130LD\u0130R\n";
}
