/*
 * M12 — Düzbucaqlının sahəsi və perimetri
 *
 * Yanaşma:
 * Sahə uzunluq × en, perimetr isə 2 × (uzunluq + en) düsturu ilə hesablanır.
 * Hər iki nəticə üçün long long tipi istifadə olunur ki, böyük dəyərlərdə
 * daşma baş verməsin.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long l, w;
    cin >> l >> w;
    cout << l * w << "\n" << 2 * (l + w) << "\n";
}
