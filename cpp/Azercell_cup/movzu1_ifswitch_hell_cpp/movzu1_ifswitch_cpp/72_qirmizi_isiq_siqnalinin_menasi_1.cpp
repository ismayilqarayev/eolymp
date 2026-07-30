/*
    Movzu 1 - If/Switch - 'boz' işıq siqnalının mənası

    Mesele: Svetofor rəngi (qirmizi/sari/yasil) verilib. Uyğun mənasını çap edin (naməlum rəng gələrsə, "NAMƏLUM RƏNG" çap olunmalıdır).

    Numune giris: boz
    Numune cixis: NAMƏLUM RƏNG

    Yanasma: switch (rəng) — lakin switch yalnız tam ədəd/char üzərində işlədiyi üçün, sözü əvvəlcə müqayisə edərək müvafiq koda çeviririk, sonra switch tətbiq olunur. Naməlum rənglər üçün switch-in default qolu işə düşür.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string color; cin >> color;
    int code;
    if (color == "qirmizi") code = 0;
    else if (color == "sari") code = 1;
    else if (color == "yasil") code = 2;
    else code = 3;
    switch (code){
        case 0: cout << "DAYAN\n"; break;
        case 1: cout << "HAZIRLA\u015e\n"; break;
        case 2: cout << "H\u018fR\u018fK\u018fT ET\n"; break;
        default: cout << "NAM\u018fLUM R\u018fNG\n";
    }
}
