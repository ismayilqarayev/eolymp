/*
    Movzu 1 - For dovru - {100, 50, 75} arasında minimum

    Mesele: N ədəd verilib. Onların ən kiçiyini tapın.

    Numune giris: 3 / 100 50 75
    Numune cixis: 50

    Yanasma: min dəyişəni ilk ədədlə başladılır, for dövrü ilə hər növbəti ədəd min-lə müqayisə edilir, kiçikdirsə min yenilənir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int mn;
    cin >> mn;
    for (int i = 1; i < n; i++){
        int x; cin >> x;
        if (x < mn) mn = x;
    }
    cout << mn << "\n";
}
