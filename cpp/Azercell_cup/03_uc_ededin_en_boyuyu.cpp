/*
 * M03 — Üç ədədin ən böyüyü
 *
 * Yanaşma:
 * Əvvəlcə mx dəyişəninə birinci ədədi mənimsədirik, sonra qalan iki ədədi
 * növbə ilə if şərti ilə müqayisə edib, böyük olarsa mx-i yeniləyirik. Bu
 * üsul istənilən sayda ədəd üçün ümumiləşdirilə bilər.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;
    cout << mx << "\n";
}
