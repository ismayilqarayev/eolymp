/*
 * M22 — EBOB (ən böyük ortaq bölən)
 *
 * Yanaşma:
 * Evklid alqoritmi istifadə olunur: while (b != 0) dövründə a və b-ni (a,
 * a%b) cütünə çeviririk. b sıfır olanda a nəticədir. Bu üsul böyük ədədlər
 * üçün belə çox sürətlidir.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    while (b != 0){
        long long t = b;
        b = a % b;
        a = t;
    }
    cout << a << "\n";
}
