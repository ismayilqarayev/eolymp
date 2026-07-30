/*
    Movzu 1 - If/Switch - 'a' hərfinin sait/samit olması

    Mesele: Bir hərf verilib (yalnız ingilis əlifbasından a,e,i,o,u samit/sait yoxlanışı üçün istifadə olunur). Sait (a,e,i,o,u) yoxsa samit olduğunu müəyyən edin.

    Numune giris: a
    Numune cixis: SAİT

    Yanasma: if (ch=='a' || ch=='e' || ...) şərti ilə hərfin sait olub-olmadığı yoxlanılır, doğru deyilsə samitdir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch; cin >> ch;
    ch = tolower(ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') cout << "SA\u0130T\n";
    else cout << "SAM\u0130T\n";
}
