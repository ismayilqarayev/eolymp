/*
    Movzu 1 - If/Switch - 11-ci ayın gün sayı

    Mesele: Ay nömrəsi (1-12) verilib. Həmin ayda neçə gün olduğunu tapın (fevral 28 gün qəbul edilir).

    Numune giris: 11
    Numune cixis: 30

    Yanasma: switch (ay) konstruksiyası ilə hər ay üçün case yazılır, uyğun gün sayı çap olunur; 30 günlük aylar üçün ortaq case istifadə edilə bilər.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int month; cin >> month;
    switch (month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << 31 << "\n"; break;
        case 4: case 6: case 9: case 11:
            cout << 30 << "\n"; break;
        case 2:
            cout << 28 << "\n"; break;
        default:
            cout << "Yanl\u0131\u015f ay\n";
    }
}
