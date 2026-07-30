/*
    Movzu 1 - If/Switch - BMI=17.5 üçün kateqoriya

    Mesele: Bədən Kütlə İndeksi (BMI) verilib. Kateqoriyasını tapın: <18.5 arıq, 18.5-24.9 normal, 25-29.9 artıq çəki, 30+ piylənmə.

    Numune giris: 17.5
    Numune cixis: ARIQ

    Yanasma: if/else if zənciri ilə BMI dəyəri ardıcıl hədlərlə (18.5, 25, 30) müqayisə edilir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    double bmi; cin >> bmi;
    if (bmi < 18.5) cout << "ARIQ\n";
    else if (bmi < 25) cout << "NORMAL\n";
    else if (bmi < 30) cout << "ARTIQ \u00c7\u018fK\u0130\n";
    else cout << "P\u0130YL\u018fNM\u018f\n";
}
