/*
    Mövzü 4 - 2 ədədinin 63-ci dərəcəsi (mod 998244353)

    Məsələ: Üç tam ədəd base, exp, mod verilib. (base^exp) mod mod dəyərini hesablayın.

    Nümunə giriş: 2 63 998244353
    Nümunə çıxış: 466025955

    Yanaşma: Sadə dövrlə base-i exp dəfə vurmaq exp böyük olduqda çox yavaşdır. Əvəzinə sürətli qüvvət (binary exponentiation) istifadə olunur: hər addımda exp 2-yə bölünür, nəticədə O(exp) əvəzinə O(log exp) vaxt sərf olunur.
*/
#include <bits/stdc++.h>
using namespace std;
long long power(long long base, long long exp, long long mod){
    long long result = 1;
    base %= mod;
    while (exp > 0){
        if (exp % 2 == 1) result = result * base % mod;
        base = base * base % mod;
        exp /= 2;
    }
    return result;
}
int main(){
    long long base, exp, mod; cin >> base >> exp >> mod;
    cout << power(base, exp, mod) << "\n";
}
