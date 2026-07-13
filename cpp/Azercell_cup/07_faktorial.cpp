/*
 * M07 — Faktorial
 *
 * Yanaşma:
 * while dövrü ilə 1-dən N-ə qədər ədədləri ardıcıl vurulur. 18! artıq int-ə
 * (~2 milyard) sığmadığı üçün long long tipi məcburidir — bu, overflow
 * riskini göstərən klassik nümunədir.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long fact = 1, i = 1;
    while (i <= n){
        fact *= i;
        i++;
    }
    cout << fact << "\n";
}
