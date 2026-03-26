/*
Eyni işarəli ədədlər

Zaman limiti: 1,0 saniyə
Yaddaş limiti: 128 MiB

Sıfırdan fərqli iki tam ədəd n və m verilib.

Əgər n və m eyni işarəyə malikdirsə → 1 çap edin

Əks halda → 0 çap edin

Qeyd: Mənfi ədədin mənfi işarəsi var, müsbət ədədin isə müsbət işarəsi var.

Giriş verilənləri

Bir sətirdə sıfırdan fərqli iki tam ədəd n və m.

Çıxış verilənləri

n və m eyni işarəlidirsə → 1

Əks halda → 0

Nümunələr

Giriş:

7 4


Çıxış:

1


Giriş:

-2 5


Çıxış:

0
*/

#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    if((n > 0 && m > 0) || (n < 0 && m < 0)){
        cout << 1;
    }
    else{
        cout << 0;
    }

    return 0;
}