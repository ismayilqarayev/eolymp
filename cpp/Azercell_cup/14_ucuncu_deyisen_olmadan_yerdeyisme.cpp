/*
 * M14 — Üçüncü dəyişən olmadan yerdəyişmə
 *
 * Yanaşma:
 * Üçüncü dəyişən olmadan yerdəyişmə klassik triki: əvvəlcə a = a + b, sonra
 * b = a − b (bu, köhnə a-nı verir), nəhayət a = a − b (bu da köhnə b-ni
 * verir). Beləliklə heç bir əlavə yaddaş sahəsi tələb olunmur.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b << "\n";
}
