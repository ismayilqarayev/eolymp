/*
    Movzu 1 - Deyisen/Tip/Operator - -8-i 1 bit sağa sürüşdürmək (mənfi ədəd)

    Mesele: Mənfi tam ədəd N və K verilib. N-i K bit sağa sürüşdürün (>>).

    Numune giris: -8 1
    Numune cixis: -4

    Yanasma: Mənfi (işarəli) ədədlərdə sağa sürüşmə adətən işarəni saxlayan (arithmetic shift) şəkildə işləyir — bu, təxminən 2^k-ya bölməyə bənzəyir, lakin nəticə mənfi qalır (0-a doğru deyil, mənfi sonsuzluğa doğru yuvarlaqlaşdırma).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    cout << (n >> k) << "\n";
}
