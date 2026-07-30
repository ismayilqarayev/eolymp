/*
    Movzu 1 - Deyisen/Tip/Operator - 100 və 50 ədədlərini XOR ilə yerdəyişmə

    Mesele: İki ədəd verilib. Əlavə dəyişən istifadə etmədən, yalnız XOR (^) operatorundan istifadə edərək onların yerini dəyişin və nəticəni çap edin (əvvəlcə b, sonra a).

    Numune giris: 100 50
    Numune cixis: 50 100

    Yanasma: XOR-un maraqlı xüsusiyyəti: a=a^b; b=a^b; a=a^b; ardıcıllığı əlavə yaddaş (temp dəyişən) olmadan iki dəyişənin yerini dəyişir — hər addımda XOR-un özünə-özünü ləğv etmə xassəsindən istifadə olunur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b << "\n";
}
