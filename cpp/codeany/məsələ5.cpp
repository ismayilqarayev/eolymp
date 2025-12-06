/*
Professor və şarlar
Zaman limiti: 1,0 saniyə

Yaddaş limiti: 128 MiB


Professor bayram üçün mavi, qırmızı və sarı şarlar alıb. Cəmi n ədəd. Sarı və mavi ilə birlikdə - a ədəd alıb. Qırmızı və mavi isə - b ədəd alıb.

Professor neçə mavi, qırmızı və sarı şar almışdı?

Giriş verilənləri
Üç natural ədəd n, a, b.

Çıxış verilənləri
Bir sətirdə professorun aldığı mavi, qırmızı və sarı topların sayını çap edin.
*/

#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    // M = a + b - n  (mavi şarlar)
    int M = a + b - n;

    // S = n - b  (sarı şarlar)
    int S = n - b;

    // Q = n - a  (qırmızı şarlar)
    int Q = n - a;

    cout << M << " " << Q << " " << S;
    return 0;
}
