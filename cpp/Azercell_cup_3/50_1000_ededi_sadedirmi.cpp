/*
    Mövzü 3 - 1000 ədədi sadədirmi?

    Məsələ: Tam ədəd N verilib. N-in sadə ədəd olub-olmadığını müəyyən edin.

    Nümunə giriş: 1000
    Nümunə çıxış: SADƏ DEYİL

    Yanaşma: 2-dən √N-ə qədər olan bütün ədədlərin N-i bölüb-bölmədiyi yoxlanılır — √N-dən sonrakı bölənləri yoxlamağa ehtiyac yoxdur, çünki onlar artıq tapılmış kiçik bölənlərin cütüdür.
*/
#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n){
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
int main(){
    long long n; cin >> n;
    cout << (isPrime(n) ? "SAD\u018fD\u0130R" : "SAD\u018f DEY\u0130L") << "\n";
}
