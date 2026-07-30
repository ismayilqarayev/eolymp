/*
    Mövzü 4 - 9999999999 və 8888888888 ədədlərinin mod 998244353 üzrə cəmi və hasili

    Məsələ: Üç tam ədəd a, b, m verilib. (a+b) mod m və (a×b) mod m dəyərlərini tapın.

    Nümunə giriş: 9999999999 8888888888 998244353
    Nümunə çıxış: 920490533 951972827

    Yanaşma: Toplama və vurmadan əvvəl hər ədəd üzərində % m tətbiq edilir ki, aralıq nəticələr böyük ədəd daşmasına (overflow) səbəb olmasın — (a % m + b % m) % m və (a % m) * (b % m) % m düsturları istifadə olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, m; cin >> a >> b >> m;
    long long sum = (a % m + b % m) % m;
    long long prod = (a % m) * (b % m) % m;
    cout << sum << " " << prod << "\n";
}
