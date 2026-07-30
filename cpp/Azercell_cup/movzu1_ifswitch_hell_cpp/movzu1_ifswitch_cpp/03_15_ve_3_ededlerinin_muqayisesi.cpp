/*
    Movzu 1 - If/Switch - 15 və 3 ədədlərinin müqayisəsi

    Mesele: İki tam ədəd a və b verilib. Hansının böyük olduğunu müəyyən edin.

    Numune giris: 15 3
    Numune cixis: Birinci böyükdür

    Yanasma: if (a > b) ... else if (a < b) ... else ... zənciri ilə üç hal ardıcıl yoxlanılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    if (a > b) cout << "Birinci b\u00f6y\u00fckd\u00fcr\n";
    else if (a < b) cout << "\u0130kinci b\u00f6y\u00fckd\u00fcr\n";
    else cout << "B\u0259rab\u0259rdir\n";
}
