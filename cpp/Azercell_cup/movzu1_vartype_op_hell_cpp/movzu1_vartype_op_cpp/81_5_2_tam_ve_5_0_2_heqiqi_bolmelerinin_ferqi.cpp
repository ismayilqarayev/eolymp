/*
    Movzu 1 - Deyisen/Tip/Operator - 5/2 (tam) və 5.0/2 (həqiqi) bölmələrinin fərqi

    Mesele: Eyni ədədləri həm tam ədəd, həm də həqiqi ədəd kimi bölərək fərqi görün. 5/2 (int bölməsi) və 5.0/2 (double bölməsi) nəticələrini ardıcıl çap edin.

    Numune giris: (bos)
    Numune cixis: 2 2.50

    Yanasma: Eyni ədədlər int kimi bölündükdə kəsr hissəsi itir, amma birini double-a çevirsək (məs. {a}.0 yazaraq), nəticə də double olur və kəsr hissəsi qorunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int intResult = 5 / 2;
    double realResult = 5.0 / 2;
    cout << intResult << " ";
    printf("%.2f\n", realResult);
}
