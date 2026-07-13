/*
 * M20 — Rəqəm sayını tapmaq
 *
 * Yanaşma:
 * n = 0 xüsusi hal kimi əvvəlcədən yoxlanılır (cavab 1). Əks halda while (n
 * > 0) dövründə hər addımda n /= 10 edilir və sayğac artırılır — dövr neçə
 * dəfə işləyibsə, rəqəm sayı o qədərdir.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    if (n == 0){ cout << "1\n"; return 0; }
    int cnt = 0;
    while (n > 0){
        n /= 10;
        cnt++;
    }
    cout << cnt << "\n";
}
