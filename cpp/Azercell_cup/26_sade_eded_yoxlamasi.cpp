/*
 * M26 — Sadə ədəd yoxlaması
 *
 * Yanaşma:
 * N ≤ 1 dərhal 'sadə deyil' hesab olunur. Əks halda 2-dən √N-ə qədər
 * bölənlər yoxlanılır; hər hansı bir bölən tapılan kimi bayraq dəyişəni
 * işarələnir və break ilə dövr dərhal dayandırılır (artıq davam etməyə
 * ehtiyac yoxdur).
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    if (n <= 1){ cout << "SADƏ DEYİL\n"; return 0; }
    bool prime = true;
    for (long long i = 2; i * i <= n; i++){
        if (n % i == 0){
            prime = false;
            break;
        }
    }
    cout << (prime ? "SADƏDİR" : "SADƏ DEYİL") << "\n";
}
