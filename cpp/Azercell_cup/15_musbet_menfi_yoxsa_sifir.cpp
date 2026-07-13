/*
 * M15 — Müsbət, mənfi yoxsa sıfır
 *
 * Yanaşma:
 * Sadə if/else if/else zənciri ilə əvvəlcə n > 0, sonra n < 0 yoxlanılır;
 * hər iki şərt doğru olmasa, avtomatik olaraq sıfır halı qalır.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    if (n > 0) cout << "MUSBET\n";
    else if (n < 0) cout << "MENFI\n";
    else cout << "SIFIR\n";
}
