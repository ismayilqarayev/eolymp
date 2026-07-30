/*
    Mövzü 4 - 1500000001 və 1500000002 ədədlərinin cəmi (overflow-suz)

    Məsələ: İki böyük tam ədəd a və b verilib. Onların cəmini tam ədəd daşması (overflow) olmadan hesablayın.

    Nümunə giriş: 1500000001 1500000002
    Nümunə çıxış: 3000000003

    Yanaşma: Adi int tipi təxminən 2.1 milyarda qədər dəyər saxlaya bilir — bu ədədlərin cəmi bu həddi keçdiyi üçün int ilə hesablasaq nəticə səhv (overflow) olardı. Ona görə dəyişənlər birbaşa long long tipində elan olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    cout << a + b << "\n";
}
