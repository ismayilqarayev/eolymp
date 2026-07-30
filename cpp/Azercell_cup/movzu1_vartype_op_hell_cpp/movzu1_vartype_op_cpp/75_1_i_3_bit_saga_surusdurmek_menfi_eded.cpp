/*
    Movzu 1 - Deyisen/Tip/Operator - -1-i 3 bit sağa sürüşdürmək (mənfi ədəd)

    Mesele: Mənfi tam ədəd N və K verilib. N-i K bit sağa sürüşdürün (>>).

    Numune giris: -1 3
    Numune cixis: -1

    Yanasma: Mənfi (işarəli) ədədlərdə sağa sürüşmə adətən işarəni saxlayan (arithmetic shift) şəkildə işləyir — bu, təxminən 2^k-ya bölməyə bənzəyir, lakin nəticə mənfi qalır (0-a doğru deyil, mənfi sonsuzluğa doğru yuvarlaqlaşdırma).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    cout << (n >> k) << "\n";
}
