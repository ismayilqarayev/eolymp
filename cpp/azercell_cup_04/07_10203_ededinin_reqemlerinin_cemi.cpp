/*
    Mövzü 4 - 10203 ədədinin rəqəmlərinin cəmi

    Məsələ: Tam ədəd N verilib. Onun rəqəmlərinin cəmini hesablayın.

    Nümunə giriş: 10203
    Nümunə çıxış: 6

    Yanaşma: N sıfır olana qədər N % 10 ilə sonuncu rəqəm ayrılır, cəmə əlavə olunur, sonra N /= 10 ilə həmin rəqəm atılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    long long sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    cout << sum << "\n";
}
