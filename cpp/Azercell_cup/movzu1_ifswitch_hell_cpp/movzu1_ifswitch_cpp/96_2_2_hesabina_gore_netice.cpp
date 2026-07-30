/*
    Movzu 1 - If/Switch - 2:2 hesabına görə nəticə

    Mesele: İki komandanın xalı (s1, s2) verilib. Birinci komandanın nəticəsini tapın.

    Numune giris: 2 2
    Numune cixis: HEÇ-HEÇƏ

    Yanasma: if (s1 > s2) ... else if (s1 < s2) ... else ... zənciri ilə üç nəticə variantı ayırd edilir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int s1, s2; cin >> s1 >> s2;
    if (s1 > s2) cout << "QAL\u0130B\n";
    else if (s1 < s2) cout << "M\u018f\u011eLUB\n";
    else cout << "HE\u00c7-HE\u00c7\u018f\n";
}
