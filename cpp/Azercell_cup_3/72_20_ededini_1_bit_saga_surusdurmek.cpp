/*
    Mövzü 3 - 20 ədədini 1 bit sağa sürüşdürmək

    Məsələ: Tam ədəd N verilib. N-i K bit sağa sürüşdürüb nəticəni tapın.

    Nümunə giriş: 20 1
    Nümunə çıxış: 10

    Yanaşma: C++-da >> operatoru sürüşmə əməliyyatını yerinə yetirir — sola sürüşmə hər bitin 2 dəfə vurulmasına, sağa sürüşmə isə 2-yə bölünməsinə bərabərdir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k; cin >> n >> k;
    cout << (n >> k) << "\n";
}
