/*
    Mövzü 4 - 2000000000 və 2000000000 ədədlərinin cəmi (overflow-suz)

    Məsələ: İki böyük tam ədəd a və b verilib. Onların cəmini tam ədəd daşması (overflow) olmadan hesablayın.

    Nümunə giriş: 2000000000 2000000000
    Nümunə çıxış: 4000000000

    Yanaşma: Adi int tipi təxminən 2.1 milyarda qədər dəyər saxlaya bilir — bu ədədlərin cəmi bu həddi keçdiyi üçün int ilə hesablasaq nəticə səhv (overflow) olardı. Ona görə dəyişənlər birbaşa long long tipində elan olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    cout << a + b << "\n";
}
