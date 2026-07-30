/*
    Movzu 1 - Deyisen/Tip/Operator - 9/4 (tam) və 9.0/4 (həqiqi) bölmələrinin fərqi

    Mesele: Eyni ədədləri həm tam ədəd, həm də həqiqi ədəd kimi bölərək fərqi görün. 9/4 (int bölməsi) və 9.0/4 (double bölməsi) nəticələrini ardıcıl çap edin.

    Numune giris: (bos)
    Numune cixis: 2 2.25

    Yanasma: Eyni ədədlər int kimi bölündükdə kəsr hissəsi itir, amma birini double-a çevirsək (məs. {a}.0 yazaraq), nəticə də double olur və kəsr hissəsi qorunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int intResult = 9 / 4;
    double realResult = 9.0 / 4;
    cout << intResult << " ";
    printf("%.2f\n", realResult);
}
