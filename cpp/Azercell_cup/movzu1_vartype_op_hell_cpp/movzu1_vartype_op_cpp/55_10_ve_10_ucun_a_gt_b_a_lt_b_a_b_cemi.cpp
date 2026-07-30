/*
    Movzu 1 - Deyisen/Tip/Operator - 10 və 10 üçün (a&gt;b)+(a&lt;b)+(a==b) cəmi

    Mesele: İki ədəd verilib. (a>b) + (a<b) + (a==b) ifadəsinin nəticəsini tapın (bool nəticələr tam ədədə çevrilir).

    Numune giris: 10 10
    Numune cixis: 1

    Yanasma: C++-da bool dəyərlər ədəd kimi işləndikdə true 1-ə, false isə 0-a çevrilir. Yalnız BİR şərt doğru ola biləcəyi üçün cəm həmişə 1 olur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int result = (a > b) + (a < b) + (a == b);
    cout << result << "\n";
}
