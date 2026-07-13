/*
 * M13 — Dairənin sahəsi
 *
 * Yanaşma:
 * π dəyəri sabit (const double) kimi elan olunur, sonra düstur birbaşa
 * tətbiq edilir. Nəticə setprecision(2) ilə iki rəqəmə yuvarlaqlaşdırılaraq
 * çap olunur.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    const double PI = 3.14159265358979;
    double r; cin >> r;
    cout << fixed << setprecision(2) << PI * r * r << "\n";
}
