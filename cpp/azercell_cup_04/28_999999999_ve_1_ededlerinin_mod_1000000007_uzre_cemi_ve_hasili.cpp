/*
    Mövzü 4 - 999999999 və 1 ədədlərinin mod 1000000007 üzrə cəmi və hasili

    Məsələ: Üç tam ədəd a, b, m verilib. (a+b) mod m və (a×b) mod m dəyərlərini tapın.

    Nümunə giriş: 999999999 1 1000000007
    Nümunə çıxış: 1000000000 999999999

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
