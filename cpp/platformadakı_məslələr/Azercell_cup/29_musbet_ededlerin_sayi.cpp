/*
 * M29 — Müsbət ədədlərin sayı
 *
 * Yanaşma:
 * N ədəd ardıcıl oxunur, hər biri üçün if (x > 0) şərti yoxlanılır və
 * doğrudursa sayğac artırılır. Sıfır müsbət sayılmır, ona görə şərt ciddi
 * bərabərsizlik (>) ilə yazılıb.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x > 0) cnt++;
    }
    cout << cnt << "\n";
}
