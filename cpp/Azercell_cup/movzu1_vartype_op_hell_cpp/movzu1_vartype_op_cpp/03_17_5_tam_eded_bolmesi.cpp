/*
    Movzu 1 - Deyisen/Tip/Operator - 17 / 5 tam ədəd bölməsi

    Mesele: İki tam ədəd verilib. C++-da tam ədəd bölməsinin (/) nəticəsini tapın (kəsr hissəsi sıfıra doğru atılır).

    Numune giris: 17 5
    Numune cixis: 3

    Yanasma: C++-da iki int bölündükdə nəticə də int olur — kəsr hissəsi atılır, mənfi nəticələrdə bu sıfıra doğru yuvarlaqlaşdırma deməkdir (məsələn -7/2 = -3, -3.5 deyil).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    cout << a / b << "\n";
}
