/*
    Mövzü 3 - 100 ədədini 2 bit sağa sürüşdürmək

    Məsələ: Tam ədəd N verilib. N-i K bit sağa sürüşdürüb nəticəni tapın.

    Nümunə giriş: 100 2
    Nümunə çıxış: 25

    Yanaşma: C++-da >> operatoru sürüşmə əməliyyatını yerinə yetirir — sola sürüşmə hər bitin 2 dəfə vurulmasına, sağa sürüşmə isə 2-yə bölünməsinə bərabərdir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k; cin >> n >> k;
    cout << (n >> k) << "\n";
}
