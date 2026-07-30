/*
    Mövzü 3 - 255 ədədini 4 bit sağa sürüşdürmək

    Məsələ: Tam ədəd N verilib. N-i K bit sağa sürüşdürüb nəticəni tapın.

    Nümunə giriş: 255 4
    Nümunə çıxış: 15

    Yanaşma: C++-da >> operatoru sürüşmə əməliyyatını yerinə yetirir — sola sürüşmə hər bitin 2 dəfə vurulmasına, sağa sürüşmə isə 2-yə bölünməsinə bərabərdir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k; cin >> n >> k;
    cout << (n >> k) << "\n";
}
