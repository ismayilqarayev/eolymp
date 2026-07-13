/*
 * M21 — Palindrom ədəd yoxlaması
 *
 * Yanaşma:
 * Orijinal ədəd bir dəyişəndə saxlanılır, sonra ədədin tərsi (Məsələ 19-dakı
 * üsulla) hesablanır. Tərs versiya orijinalla bərabərdirsə, ədəd
 * palindromdur.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    long long orig = n, rev = 0;
    while (n > 0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << (rev == orig ? "PALINDROM" : "DEYIL") << "\n";
}
