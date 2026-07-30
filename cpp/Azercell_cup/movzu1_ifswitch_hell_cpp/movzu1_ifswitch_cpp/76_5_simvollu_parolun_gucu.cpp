/*
    Movzu 1 - If/Switch - 5 simvollu parolun gücü

    Mesele: Parolun uzunluğu verilib. Gücünü tapın: <6 zəif, 6-9 orta, 10+ güclü.

    Numune giris: 5
    Numune cixis: ZƏİF

    Yanasma: if/else if zənciri ilə uzunluq ardıcıl hədlərlə (6, 10) müqayisə olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int len; cin >> len;
    if (len < 6) cout << "Z\u018f\u0130F\n";
    else if (len < 10) cout << "ORTA\n";
    else cout << "G\u00dcCL\u00dc\n";
}
