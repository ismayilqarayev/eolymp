/*
 * M19 — Ədədi tərsinə çevirmək
 *
 * Yanaşma:
 * Hər addımda sonuncu rəqəm (n % 10) ayrılır və nəticə dəyişəninə rev = rev
 * * 10 + rəqəm düsturu ilə əlavə olunur, sonra n /= 10 ilə davam edilir. Bu,
 * ədədi 'sağdan sola' yenidən quraşdırma üsuludur.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    long long rev = 0;
    while (n > 0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << rev << "\n";
}
