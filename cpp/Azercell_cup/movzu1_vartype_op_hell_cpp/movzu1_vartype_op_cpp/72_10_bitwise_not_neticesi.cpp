/*
    Movzu 1 - Deyisen/Tip/Operator - ~10 (bitwise NOT) nəticəsi

    Mesele: Tam ədəd N verilib. ~N (bitwise NOT) ifadəsinin nəticəsini tapın.

    Numune giris: 10
    Numune cixis: -11

    Yanasma: ~ operatoru ədədin hər bitini əksinə çevirir (0→1, 1→0). Tam ədədlər üçün riyazi olaraq bu, ~n = -n - 1 düsturuna bərabərdir (ikilik tamamlayıcı təsvirinə görə).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    cout << (~n) << "\n";
}
