/*
    Movzu 1 - For dovru - 1-dən 7-ə qədər ədədlərin cəmi

    Mesele: Tam ədəd N verilib. 1-dən N-ə qədər olan ədədlərin cəmini hesablayın.

    Numune giris: 7
    Numune cixis: 28

    Yanasma: Cəm dəyişəni 0-dan başlayır, for dövrü ilə hər addımda cari ədəd cəmə əlavə olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    cout << sum << "\n";
}
