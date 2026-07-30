/*
    Movzu 1 - Deyisen/Tip/Operator - 'Z' hərfini 1 mövqe irəli sürüşdürmək

    Mesele: Bir hərf və bir ədəd verilib. Hərfi əlifba üzrə N mövqe irəli sürüşdürün (ASCII kodu üzərindən).

    Numune giris: Z / 1
    Numune cixis: [

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
