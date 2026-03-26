/*
Rəqəmlərə bölünmək

Zaman limiti: 1,0 saniyə
Yaddaş limiti: 64 MiB

Dördrəqəmli natural ədəd verilmişdir. Bu ədədin bütün rəqəmlərinə 
bölünüb-bölünmədiyini müəyyənləşdirin.

Əgər ədəd hər bir rəqəminə bölünürsə, YES çap edin.
Əks halda, NO çap edin.

Giriş verilənləri

Tək sətirdə dörd rəqəmli natural ədəd n (1000 ≤ n ≤ 9999).

Çıxış verilənləri

Əgər ədəd bütün rəqəmlərinə bölünürsə, YES çap edin.

Əks halda, NO çap edin.

Nümunələr:

Giriş:

1284


Çıxış:

YES


Giriş:

1234


Çıxış:

NO
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a = n / 1000;          // minlik
    int b = (n / 100) % 10;    // yüzlük
    int c = (n / 10) % 10;     // onluq
    int d = n % 10;            // təklik

    if(a != 0 && b != 0 && c != 0 && d != 0 &&
       n % a == 0 &&
       n % b == 0 &&
       n % c == 0 &&
       n % d == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}