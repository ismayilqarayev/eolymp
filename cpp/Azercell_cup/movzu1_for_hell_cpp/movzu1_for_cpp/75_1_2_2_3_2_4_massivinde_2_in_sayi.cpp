/*
    Movzu 1 - For dovru - {1, 2, 2, 3, 2, 4} massivində 2-in sayı

    Mesele: N ədəddən ibarət massiv və X ədədi verilib. Massivdə X-in neçə dəfə rast gəlindiyini tapın.

    Numune giris: 6 / 1 2 2 3 2 4 / 2
    Numune cixis: 3

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
