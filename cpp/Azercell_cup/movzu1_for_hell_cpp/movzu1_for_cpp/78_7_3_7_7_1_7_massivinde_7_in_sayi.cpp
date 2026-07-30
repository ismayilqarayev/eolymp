/*
    Movzu 1 - For dovru - {7, 3, 7, 7, 1, 7} massivində 7-in sayı

    Mesele: N ədəddən ibarət massiv və X ədədi verilib. Massivdə X-in neçə dəfə rast gəlindiyini tapın.

    Numune giris: 6 / 7 3 7 7 1 7 / 7
    Numune cixis: 4

    Yanasma: for dövrü ilə massiv gəzilir, if (a[i] == X) şərti ilə hər uyğunluq sayılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int x; cin >> x;
    int cnt = 0;
    for (int i = 0; i < n; i++) if (a[i] == x) cnt++;
    cout << cnt << "\n";
}
