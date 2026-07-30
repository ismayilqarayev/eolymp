/*
    Movzu 1 - For dovru - {9, 9, 9, 9} massivində 9-dən böyük elementlərin sayı

    Mesele: N ədəddən ibarət massiv və T həddi verilib. Massivdə T-dən böyük elementlərin sayını tapın.

    Numune giris: 4 / 9 9 9 9 / 9
    Numune cixis: 0

    Yanasma: for dövrü ilə massiv gəzilir, if (a[i] > T) şərti doğru olduqda sayğac artırılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int t; cin >> t;
    int cnt = 0;
    for (int i = 0; i < n; i++) if (a[i] > t) cnt++;
    cout << cnt << "\n";
}
