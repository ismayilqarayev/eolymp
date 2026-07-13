/*
 * M28 — Vurma cədvəli
 *
 * Yanaşma:
 * for (i = 1; i <= 10; i++) dövründə hər addımda N × i hesablanır və tələb
 * olunan formatda çap edilir. Format sətri dəqiq nümunəyə uyğun olmalıdır
 * (boşluqların yeri daxil olmaqla).
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    for (int i = 1; i <= 10; i++){
        cout << n << " x " << i << " = " << n * i << "\n";
    }
}
