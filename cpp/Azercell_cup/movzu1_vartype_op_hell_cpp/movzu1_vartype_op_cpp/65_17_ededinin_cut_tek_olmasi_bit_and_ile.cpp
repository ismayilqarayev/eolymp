/*
    Movzu 1 - Deyisen/Tip/Operator - 17 ədədinin cüt/tək olması (bit AND ilə)

    Mesele: Tam ədəd N verilib. (n & 1) bit əməliyyatından istifadə edərək cüt/tək olduğunu müəyyən edin.

    Numune giris: 17
    Numune cixis: TƏK

    Yanasma: İkilik say sistemində ən sağdakı bit ədədin cüt/tək olmasını göstərir — n & 1 yalnız bu biti saxlayır: nəticə 1-dirsə tək, 0-dırsa cütdür. Bu üsul %-dan sürətlidir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if (n & 1) cout << "T\u018fK\n";
    else cout << "C\u00dcT\n";
}
