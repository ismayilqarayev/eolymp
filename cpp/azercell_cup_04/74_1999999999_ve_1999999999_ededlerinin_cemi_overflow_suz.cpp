/*
    Mövzü 4 - 1999999999 və 1999999999 ədədlərinin cəmi (overflow-suz)

    Məsələ: İki böyük tam ədəd a və b verilib. Onların cəmini tam ədəd daşması (overflow) olmadan hesablayın.

    Nümunə giriş: 1999999999 1999999999
    Nümunə çıxış: 3999999998

    Yanaşma: Adi int tipi təxminən 2.1 milyarda qədər dəyər saxlaya bilir — bu ədədlərin cəmi bu həddi keçdiyi üçün int ilə hesablasaq nəticə səhv (overflow) olardı. Ona görə dəyişənlər birbaşa long long tipində elan olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    cout << a + b << "\n";
}
