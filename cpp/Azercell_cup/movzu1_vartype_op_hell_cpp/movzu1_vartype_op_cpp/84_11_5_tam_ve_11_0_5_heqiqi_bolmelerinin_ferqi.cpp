/*
    Movzu 1 - Deyisen/Tip/Operator - 11/5 (tam) və 11.0/5 (həqiqi) bölmələrinin fərqi

    Mesele: Eyni ədədləri həm tam ədəd, həm də həqiqi ədəd kimi bölərək fərqi görün. 11/5 (int bölməsi) və 11.0/5 (double bölməsi) nəticələrini ardıcıl çap edin.

    Numune giris: (bos)
    Numune cixis: 2 2.20

    Yanasma: Eyni ədədlər int kimi bölündükdə kəsr hissəsi itir, amma birini double-a çevirsək (məs. {a}.0 yazaraq), nəticə də double olur və kəsr hissəsi qorunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int intResult = 11 / 5;
    double realResult = 11.0 / 5;
    cout << intResult << " ";
    printf("%.2f\n", realResult);
}
