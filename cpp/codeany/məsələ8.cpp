/*
Məktəb konserti

Zaman limiti: 1.0 saniyə
Yaddaş limiti: 128 MiB

Məktəb konsertində a sayda şagird oxudu, b sayda şagird rəqs etdi, c sayda isə həm oxudu, həm də rəqs etdi. Konsertdə ümumilikdə neçə şagirdin iştirak etdiyini tapmaq tələb olunur.

Giriş verilənləri

Bir sətirdə boşluqla ayrılmış üç natural ədəd verilir: a, b və c
(a, b, c ≤ ...).

Çıxış verilənləri

Yeganə ədəd – məsələnin cavabı.

Nümunə

Giriş:

13 9 5


Çıxış:

17
*/

/*
a — oxuyan şagirdlərin sayı

b — rəqs edən şagirdlərin sayı

c — həm oxuyan, həm də rəqs edən şagirdlərin sayı (yəni kəsişmə)

Ümumi iştirakçıları hesablamaq üçün kəsişmə (c) iki dəfə sayıldığından onu bir dəfə çıxırıq:

total = a + b - c
*/
//Şərhli C++ kodu

#include <iostream>
using namespace std;

int main() 
{
    long long a, b, c;
    cin >> a >> b >> c; // a: oxuyanlar, b: rəqs edənlər, c: hər iki fəaliyyətdə olanlar

    // Ümumi şagird sayı = a + b - c (çünki c həm a-nın, həm b-nin tərkibindədir)
    long long total = a + b - c;

    cout << total << '\n';
    return 0;
}
/*
Nümunə

Giriş:

13 9 5


Hesab:

total = 13 + 9 - 5 = 17


Çıxış:

17
*/