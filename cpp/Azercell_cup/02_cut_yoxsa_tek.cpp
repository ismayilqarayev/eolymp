/*
 * M02 — Cüt yoxsa tək?
 *
 * Yanaşma:
 * Qalıq (%) operatoru ilə ədədin 2-yə bölünəndən qalan hissəsi yoxlanılır:
 * qalıq 0-dırsa ədəd cütdür, əks halda təkdir. Bu, cüt/tək yoxlamasının
 * standart üsuludur.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    cout << (n % 2 == 0 ? "CUT" : "TAK") << "\n";
}
