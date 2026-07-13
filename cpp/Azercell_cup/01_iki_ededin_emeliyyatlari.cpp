/*
 * M01 — İki ədədin əməliyyatları
 *
 * Yanaşma:
 * İki dəyişəni long long tipində oxuyuruq (böyük ədədlərdə daşmanın
 * qarşısını almaq üçün) və beş aritmetik operatoru (+, -, *, /, %) sırayla
 * tətbiq edib nəticələri ayrı sətirlərdə çap edirik.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    cout << a + b << "\n" << a - b << "\n" << a * b << "\n" << a / b << "\n" << a % b << "\n";
}
