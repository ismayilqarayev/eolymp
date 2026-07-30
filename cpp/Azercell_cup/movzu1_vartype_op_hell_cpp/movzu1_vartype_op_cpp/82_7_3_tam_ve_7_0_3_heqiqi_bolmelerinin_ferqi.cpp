/*
    Movzu 1 - Deyisen/Tip/Operator - 7/3 (tam) və 7.0/3 (həqiqi) bölmələrinin fərqi

    Mesele: Eyni ədədləri həm tam ədəd, həm də həqiqi ədəd kimi bölərək fərqi görün. 7/3 (int bölməsi) və 7.0/3 (double bölməsi) nəticələrini ardıcıl çap edin.

    Numune giris: (bos)
    Numune cixis: 2 2.33

    Yanasma: Eyni ədədlər int kimi bölündükdə kəsr hissəsi itir, amma birini double-a çevirsək (məs. {a}.0 yazaraq), nəticə də double olur və kəsr hissəsi qorunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int intResult = 7 / 3;
    double realResult = 7.0 / 3;
    cout << intResult << " ";
    printf("%.2f\n", realResult);
}
