/*
 * M27 — 1-dən N-ə qədər cüt ədədlərin cəmi
 *
 * Yanaşma:
 * for dövründə hər ədəd üzərindən keçilir, i % 2 == 0 şərti ilə yalnız cüt
 * ədədlər cəmə əlavə olunur. Alternativ olaraq dövrü 2-dən başladıb addım 2
 * ilə irəlilətmək də mümkündür, lakin bu forma şərt yoxlamasını daha açıq
 * göstərir.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    long long sum = 0;
    for (long long i = 1; i <= n; i++){
        if (i % 2 == 0) sum += i;
    }
    cout << sum << "\n";
}
