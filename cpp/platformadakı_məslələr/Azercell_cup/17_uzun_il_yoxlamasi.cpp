/*
 * M17 — Uzun il yoxlaması
 *
 * Yanaşma:
 * Uzun il şərti klassik düsturla yoxlanılır: (il % 4 == 0 && il % 100 != 0)
 * || il % 400 == 0. Bu şərt həm 2024 (4-ə bölünür, 100-ə yox) həm də 2000
 * (400-ə bölünür) kimi halları düzgün əhatə edir, 1900 kimi halları isə
 * istisna edir.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long y; cin >> y;
    bool leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    cout << (leap ? "BƏLİ" : "XEYR") << "\n";
}
