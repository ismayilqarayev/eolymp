/*
    Movzu 1 - For dovru - 4 faktorial (N!)

    Mesele: Tam ədəd N verilib. N! (N faktorial) dəyərini hesablayın.

    Numune giris: 4
    Numune cixis: 24

    Yanasma: Hasil dəyişəni 1-dən başlayır, for dövrü ilə i=2-dən N-ə qədər hər ədəd ardıcıl vurulur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long prod = 1;
    for (int i = 2; i <= n; i++) prod *= i;
    cout << prod << "\n";
}
