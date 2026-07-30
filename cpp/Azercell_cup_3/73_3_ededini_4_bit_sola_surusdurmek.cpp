/*
    Mövzü 3 - 3 ədədini 4 bit sola sürüşdürmək

    Məsələ: Tam ədəd N verilib. N-i K bit sola sürüşdürüb nəticəni tapın.

    Nümunə giriş: 3 4
    Nümunə çıxış: 48

    Yanaşma: C++-da << operatoru sürüşmə əməliyyatını yerinə yetirir — sola sürüşmə hər bitin 2 dəfə vurulmasına, sağa sürüşmə isə 2-yə bölünməsinə bərabərdir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k; cin >> n >> k;
    cout << (n << k) << "\n";
}
