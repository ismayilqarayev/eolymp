/*
    Mövzü 4 - 999999999 və 999999999 ədədlərinin cəmi (overflow-suz)

    Məsələ: İki böyük tam ədəd a və b verilib. Onların cəmini tam ədəd daşması (overflow) olmadan hesablayın.

    Nümunə giriş: 999999999 999999999
    Nümunə çıxış: 1999999998

    Yanaşma: Adi int tipi təxminən 2.1 milyarda qədər dəyər saxlaya bilir — bu ədədlərin cəmi bu həddi keçdiyi üçün int ilə hesablasaq nəticə səhv (overflow) olardı. Ona görə dəyişənlər birbaşa long long tipində elan olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    cout << a + b << "\n";
}
