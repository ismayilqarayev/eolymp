/*
    Movzu 1 - Deyisen/Tip/Operator - 7.9 ədədini int-ə çevirmək

    Mesele: Həqiqi (double) ədəd verilib. Onu (int) ilə tam ədədə çevirin (kəsr hissəsi atılır, sıfıra doğru).

    Numune giris: 7.9
    Numune cixis: 7

    Yanasma: (int) aşkar (explicit) tip çevrilməsi kəsr hissəsini sıfıra doğru atır — 7.9 → 7, -3.2 → -3 (aşağı yuvarlaqlaşdırma ilə qarışdırılmamalıdır, mənfi ədədlərdə fərq var).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    double x; cin >> x;
    int y = (int)x;
    cout << y << "\n";
}
