/*
 * M24 — Qüvvətə yüksəltmə
 *
 * Yanaşma:
 * Nəticə dəyişəni 1-dən başlayır və for dövründə b dəfə a-ya vurulur. b = 0
 * halında dövr heç işləmir və nəticə 1 olaraq qalır — bu, riyazi olaraq aᵒ =
 * 1 qaydasına uyğundur.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    long long res = 1;
    for (int i = 0; i < b; i++) res *= a;
    cout << res << "\n";
}
