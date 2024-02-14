//---------------------------------------------------------------------------
//************************************************************************************
/*

İki mənfi olmayan n, m < 30 ədədləri verilir, n və m fərqlidirlər.

Yalnız bit əməliyyatlarından istifadə etməklə 2^n + 2^m ifadənin qiymətini hesablayın.

Giriş verilənləri
İki mənfi olmayan n və m tam ədədləri verilir.

Çıxış verilənləri
2^n + 2^m ifadəsinin qiymətini çap edin.

Nümunə
Giriş verilənləri #1 content_copy
1 2
Çıxış verilənləri #1 content_copy
6

*/

#include <iostream>

using namespace std;

int main() 
{
    long long n, m;
    cin >> n >> m;

    long long a = 1 << n;  // 2 üstü n
    long long b = 1 << m;  // 2 üstü m

    cout << a + b;

    return 0;
}

//----------------------------pow ile yazilan-----------------------------//
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    long long n, m;
    cin >> n >> m;

    long long a = pow(2, n);  // Calculate 2^n using the pow function
    long long b = pow(2, m);  // Calculate 2^m using the pow function

    cout << a + b;  // Print the sum of 2^n and 2^m

    return 0;
}



//-------------------------------------------------------------//
/*
Üçrəqəmli natural ədəd verilmişdir. Onun rəqəmlərinin cəmini və hasilini hesablayın.

Giriş verilənləri
Yeganə üçrəqəmli natural n (100 ≤ n ≤ 999) ədədi.

Çıxış verilənləri
Tək sətirdə n ədədinin rəqəmlərinin cəmini və hasilini çap edin.

Nümunə
Giriş verilənləri #1 content_copy
234
Çıxış verilənləri #1 content_copy
9 24
*/
#include <iostream>

using namespace std;

int main() {
    // Üçrəqəmli natural ədədi qəbul et
    int n;
    cin >> n;

    // Rəqəmlərin cəmini və hasilini hesabla
    int a = n / 100;          // Yüzlik rəqəmi
    int b = (n / 10) % 10;     // Onluq rəqəmi
    int c = n % 10;            // Birlik rəqəmi

    int cem = a + b + c;
    int hasil = a * b * c;

    // Nəticəni çap et
    cout << cem << ' ' << hasil;

    return 0;

    
}



