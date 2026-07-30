/*
    Mövzü 4 - 1000000000 və 1000000000 ədədlərinin mod 999999937 üzrə cəmi və hasili

    Məsələ: Üç tam ədəd a, b, m verilib. (a+b) mod m və (a×b) mod m dəyərlərini tapın.

    Nümunə giriş: 1000000000 1000000000 999999937
    Nümunə çıxış: 126 3969

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
