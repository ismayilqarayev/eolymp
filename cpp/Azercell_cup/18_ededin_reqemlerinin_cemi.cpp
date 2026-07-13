/*
 * M18 — Ədədin rəqəmlərinin cəmi
 *
 * Yanaşma:
 * while (n > 0) dövründə hər addımda n % 10 ilə sonuncu rəqəm ayrılır, cəmə
 * əlavə olunur, sonra n /= 10 ilə həmin rəqəm ədəddən silinir. n = 0 halı
 * ayrıca yoxlanılmır, çünki cəm artıq 0-dır.
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
