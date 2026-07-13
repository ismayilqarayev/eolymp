/*
 * M10 — Təxmin oyunu simulyasiyası
 *
 * Yanaşma:
 * Əvvəlcə ilk təxmin dövrdən KƏNARDA oxunur, sonra while (guess != 0) şərti
 * ilə dövr davam edir — bu, 'oxu, sonra yoxla' modelidir (do-while-a bənzər
 * məntiq, lakin şərtin dövrün əvvəlində yoxlanması üçün ilk oxuma əvvəlcədən
 * edilir). Hər addımda üç nəticədən biri (KICIK/BOYUK/DUZ) çap olunur və
 * növbəti təxmin oxunur.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    int guess;
    cin >> guess;
    while (guess != 0){
        if (guess < x) cout << "KICIK\n";
        else if (guess > x) cout << "BOYUK\n";
        else cout << "DUZ\n";
        cin >> guess;
    }
}
