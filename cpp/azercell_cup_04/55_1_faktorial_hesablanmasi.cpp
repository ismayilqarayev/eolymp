/*
    Mövzü 4 - 1! (faktorial) hesablanması

    Məsələ: Tam ədəd N verilib. N! (N faktorial) dəyərini hesablayın.

    Nümunə giriş: 1
    Nümunə çıxış: 1

    Yanaşma: for dövrü ilə 2-dən N-ə qədər olan bütün ədədlər ardıcıl vurulur. N=0 və N=1 üçün nəticə 1-dir (baza halı). 18-dən sonra nəticə long long tipinin belə həddini keçə bilər, ona görə N ≤ 18 ilə məhdudlaşdırılıb.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    cout << res << "\n";
}
