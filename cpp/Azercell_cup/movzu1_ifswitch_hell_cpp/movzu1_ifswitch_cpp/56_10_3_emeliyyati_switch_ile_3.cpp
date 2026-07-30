/*
    Movzu 1 - If/Switch - 10 / 3 əməliyyatı (switch ilə)

    Mesele: İki ədəd və bir əməliyyat işarəsi (+,-,*,/) verilib. Uyğun nəticəni hesablayın.

    Numune giris: 10 / 3
    Numune cixis: 3

    Yanasma: switch (op) konstruksiyası hər əməliyyat işarəsi üçün ayrıca case yazaraq uyğun hesablamanı yerinə yetirir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a; char op; int b;
    cin >> a >> op >> b;
    switch (op){
        case '+': cout << a + b << "\n"; break;
        case '-': cout << a - b << "\n"; break;
        case '*': cout << a * b << "\n"; break;
        case '/': cout << a / b << "\n"; break;
        default: cout << "Naməlum əməliyyat\n";
    }
}
