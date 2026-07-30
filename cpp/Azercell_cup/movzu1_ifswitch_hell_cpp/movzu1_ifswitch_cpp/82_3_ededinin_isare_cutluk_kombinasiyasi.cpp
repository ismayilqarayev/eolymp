/*
    Movzu 1 - If/Switch - -3 ədədinin işarə+cütlük kombinasiyası

    Mesele: Tam ədəd N verilib. Onun həm müsbət/müsbət olmama, həm də cüt/tək statusunu birgə müəyyən edin.

    Numune giris: -3
    Numune cixis: MÜSBƏT DEYİL VƏ TƏK

    Yanasma: İç-içə (nested) if: xarici if işarəni yoxlayır, onun daxilində daha bir if cütlüyü yoxlayır — bu, iki müstəqil şərtin birlikdə yoxlanılması üsuludur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if (n > 0){
        if (n % 2 == 0) cout << "M\u00dcSB\u018fT V\u018f C\u00dcT\n";
        else cout << "M\u00dcSB\u018fT V\u018f T\u018fK\n";
    } else {
        if (n % 2 == 0) cout << "M\u00dcSB\u018fT DEY\u0130L V\u018f C\u00dcT\n";
        else cout << "M\u00dcSB\u018fT DEY\u0130L V\u018f T\u018fK\n";
    }
}
