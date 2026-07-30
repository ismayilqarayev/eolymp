/*
    Movzu 1 - For dovru - Fibonaççi ardıcıllığının ilk 8 həddi

    Mesele: N verilib. Fibonaççi ardıcıllığının ilk N həddini çap edin (0, 1, 1, 2, 3, 5, ...).

    Numune giris: 8
    Numune cixis: 0 1 1 2 3 5 8 13

    Yanasma: İki dəyişən (a=0, b=1) saxlanılır, for dövrü N dəfə təkrarlanır: hər addımda a çap olunur, sonra a və b yenilənir (a,b = b, a+b).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long a = 0, b = 1;
    for (int i = 0; i < n; i++){
        cout << a;
        if (i != n-1) cout << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << "\n";
}
