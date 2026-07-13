/*
 * M05 — Həftənin günü
 *
 * Yanaşma:
 * Çoxsaylı ayrı-ayrı sabit dəyəri (1-7) yoxlamaq lazım olduğu üçün uzun
 * if/else if zənciri əvəzinə switch-case istifadə etmək kodu daha oxunaqlı
 * edir. default hal 7-ni (Bazar) əhatə edir.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int d; cin >> d;
    switch(d){
        case 1: cout << "Bazar ertəsi\n"; break;
        case 2: cout << "Çərşənbə axşamı\n"; break;
        case 3: cout << "Çərşənbə\n"; break;
        case 4: cout << "Cümə axşamı\n"; break;
        case 5: cout << "Cümə\n"; break;
        case 6: cout << "Şənbə\n"; break;
        default: cout << "Bazar\n";
    }
}
