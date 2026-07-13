/*
 * M04 — Qiymətləndirmə sistemi
 *
 * Yanaşma:
 * Şərtlər yuxarıdan aşağıya, ən böyük hədddən başlayaraq yoxlanılmalıdır
 * (90+, sonra 70+, sonra 50+). Əks sıra ilə yazılsaydı (əvvəlcə 50+
 * yoxlansaydı), 90 balı olan şagird səhvən 'C'yə düşərdi — bu tipik məntiq
 * səhvidir.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int score;
    cin >> score;
    if (score >= 90) cout << "A\n";
    else if (score >= 70) cout << "B\n";
    else if (score >= 50) cout << "C\n";
    else cout << "D\n";
}
