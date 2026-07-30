/*
    Movzu 1 - Deyisen/Tip/Operator - 'A' hərfini 5 mövqe irəli sürüşdürmək

    Mesele: Bir hərf və bir ədəd verilib. Hərfi əlifba üzrə N mövqe irəli sürüşdürün (ASCII kodu üzərindən).

    Numune giris: A / 5
    Numune cixis: F

    Yanasma: C++-da char aslında kiçik bir tam ədəddir (ASCII kodu) — hərfin üzərinə ədəd əlavə etmək onun ASCII kodunu artırır, nəticədə əlifbada irəli sürüşmüş hərf alınır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch; cin >> ch;
    int n; cin >> n;
    char res = ch + n;
    cout << res << "\n";
}
