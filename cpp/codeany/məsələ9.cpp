/*
Palindrom ədəd
Zaman limiti: 1,0 saniyə

Yaddaş limiti: 64 MiB

Natural dördrəqəmli ədəd verilmişdir. Onun palindrom olub-olmadığını müəyyənləşdirin. Qeyd edək ki, natural ədəd soldan sağa və sağdan sola eyni oxuyursa, palindromdur. Məsələn, 2332 rəqəmi palindromdur.

Giriş verilənləri
Birinci sətirdə natural dördrəqəmli ədəd n var.

Çıxış verilənləri
Rəqəm palindromdursa YES və ya palindrom deyilsə NO yazın
*/

/*
Aşağıda palindrom dördrəqəmli ədəd üçün sadə və düzgün həll verilir.

İzah

Dördrəqəmli ədəd n üçün:

minlik rəqəm: a = n / 1000

yüzlük rəqəm: b = (n / 100) % 10

onluq rəqəm: c = (n / 10) % 10

təklik rəqəm: d = n % 10

Əgər a == d və b == c olarsa, ədəd palindromdur.
*/

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int a = n / 1000;
    int b = (n / 100) % 10;
    int c = (n / 10) % 10;
    int d = n % 10;

    if (a == d && b == c)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
