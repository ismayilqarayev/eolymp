/*
 * M09 — Dövrü erkən dayandırmaq
 *
 * Yanaşma:
 * Dövr N ədəd üzərindən keçir, hər ədədi oxuyub mənfi olub-olmadığını
 * yoxlayır. İlk tapılan mənfi ədədin indeksi idx-də saxlanılır (yalnız hələ
 * tapılmayıbsa, idx==-1 şərti ilə). Giriş tam oxunmalı olduğu üçün burada
 * break istifadə edilmir; giriş formatı sabit olsaydı, tapan kimi break ilə
 * dövrü erkən dayandırmaq da mümkün olardı.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int idx = -1;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if (x < 0 && idx == -1){
            idx = i;
            // Qeyd: dövrü davam etdiririk ki, qalan girişi də oxuyaq,
            // amma istəsək break; ilə burda dayandıra da bilərik (giriş bitibsə)
        }
    }
    cout << idx << "\n";
}
