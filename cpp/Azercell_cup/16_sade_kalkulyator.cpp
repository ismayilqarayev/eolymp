/*
 * M16 — Sadə kalkulyator
 *
 * Yanaşma:
 * Əməliyyat simvolu char tipində oxunur və switch-case ilə uyğun aritmetik
 * əməliyyat seçilir. Bütün nəticələr vahid formatda (2 onluq dəqiqliklə) çap
 * olunur ki, bölmə nəticəsi ilə digər nəticələr fərqli görünməsin.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b; char op;
    cin >> a >> op >> b;
    double res = 0;
    switch(op){
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/': res = a / b; break;
    }
    cout << fixed << setprecision(2) << res << "\n";
}
