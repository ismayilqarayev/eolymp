/*
 * M23 — EKOB (ən kiçik ortaq bölünən)
 *
 * Yanaşma:
 * Əvvəlcə Evklid alqoritmi ilə EBOB tapılır, sonra EKOB = (a × b) / EBOB
 * düsturu tətbiq olunur. Daşmanın qarşısını almaq üçün hasil long long
 * tipində hesablanır.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    long long x = a, y = b;
    while (y != 0){
        long long t = y;
        y = x % y;
        x = t;
    }
    long long gcd = x;
    cout << (a / gcd) * b << "\n";
}
