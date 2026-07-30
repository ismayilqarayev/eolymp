/*
    Movzu 1 - For dovru - 12 ədədinin bölənlərinin cəmi

    Mesele: N verilib. N-in bütün müsbət bölənlərinin cəmini tapın (N-in özü də daxil).

    Numune giris: 12
    Numune cixis: 28

    Yanasma: for dövrü i=1-dən N-ə qədər gəzir, if (N % i == 0) şərti doğru olduqda i cəmə əlavə olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) if (n % i == 0) sum += i;
    cout << sum << "\n";
}
