/*
Düzbucaqlının perimetri

Zaman limiti: 1.0 saniyə
Yaddaş limiti: 128 MiB

Düzbucaqlının perimetrini hesablayın.

Giriş verilənləri

Düzbucaqlının tam qiymətli a və b tərəfləri verilir (1 ≤ a, b ≤ 1000).

Çıxış verilənləri

Düzbucaqlının perimetri çap edilməlidir. 
*/

//---Həlli--//

#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    // Düzbucaqlının tərəflərini oxuyuruq
    cin >> a >> b;

    // Perimetri hesablayırıq: P = 2 * (a + b)
    int P = 2 * (a + b);

    // Nəticəni ekrana çıxarırıq
    cout << P;

    return 0;
}
