/*
 * M25 — Fibonaççi ardıcıllığının N-ci həddi
 *
 * Yanaşma:
 * İlk iki hədd (1 və 1) əvvəlcədən təyin olunur, sonra for dövründə hər
 * addımda növbəti hədd əvvəlki ikisinin cəmi kimi hesablanır və dəyişənlər
 * növbə ilə sürüşdürülür. N ≤ 2 halları ayrıca yoxlanılır.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if (n <= 2){ cout << 1 << "\n"; return 0; }
    long long prev1 = 1, prev2 = 1, cur = 0;
    for (int i = 3; i <= n; i++){
        cur = prev1 + prev2;
        prev1 = prev2;
        prev2 = cur;
    }
    cout << cur << "\n";
}
