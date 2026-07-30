/*
    Movzu 1 - For dovru - 10-dan 30-yə qədər cüt ədədlərin cəmi

    Mesele: a və b verilib. a-dan b-yə qədər (daxil) bütün cüt ədədlərin cəmini tapın.

    Numune giris: 10 30
    Numune cixis: 220

    Yanasma: for dövrü i=a-dan b-yə qədər gəzir, if (i % 2 == 0) şərti doğru olduqda i cəmə əlavə olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    long long sum = 0;
    for (int i = a; i <= b; i++) if (i % 2 == 0) sum += i;
    cout << sum << "\n";
}
