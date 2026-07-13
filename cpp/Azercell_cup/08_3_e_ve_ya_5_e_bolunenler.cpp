/*
 * M08 — 3-ə və ya 5-ə bölünənlər
 *
 * Yanaşma:
 * Hər ədəd üçün %3 və %5 yoxlanılır. Şərtə uyğun olmayan ədədlər continue
 * ilə ötürülür — bu, 'mənfi şərt + continue' nümunəsi olaraq şərtin əksini
 * yazıb sətri ötürməyin necə işlədiyini göstərir.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        if (i % 3 != 0 && i % 5 != 0) continue; // uyğun deyilsə ötür
        cout << i << "\n";
    }
}
