/*
 * M11 — Selsidən Farenheytə
 *
 * Yanaşma:
 * Formula birbaşa tətbiq olunur. Nəticənin kəsr hissəsi ilə çap edilməsi
 * üçün cout << fixed << setprecision(2) istifadə edilir ki, tam ədədlər də
 * '212.00' formatında görünsün.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    double c; cin >> c;
    double f = c * 9.0 / 5.0 + 32.0;
    cout << fixed << setprecision(2) << f << "\n";
}
