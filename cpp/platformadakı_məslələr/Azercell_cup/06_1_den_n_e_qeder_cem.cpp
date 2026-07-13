/*
 * M06 — 1-dən N-ə qədər cəm
 *
 * Yanaşma:
 * for dövrü ilə 1-dən N-ə qədər hər ədəd üzərindən keçib, hər addımda cəmə
 * əlavə edirik. Nəticə böyük ola biləcəyi üçün long long istifadə olunur (N
 * ≤ 10^6 olsa da, cəm ~5×10^11-ə çata bilər).
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    long long sum = 0;
    for (long long i = 1; i <= n; i++) sum += i;
    cout << sum << "\n";
}
