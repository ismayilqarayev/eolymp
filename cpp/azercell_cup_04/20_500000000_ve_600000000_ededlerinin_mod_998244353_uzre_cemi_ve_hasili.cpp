/*
    Mövzü 4 - 500000000 və 600000000 ədədlərinin mod 998244353 üzrə cəmi və hasili

    Məsələ: Üç tam ədəd a, b, m verilib. (a+b) mod m və (a×b) mod m dəyərlərini tapın.

    Nümunə giriş: 500000000 600000000 998244353
    Nümunə çıxış: 101755647 414470140

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
