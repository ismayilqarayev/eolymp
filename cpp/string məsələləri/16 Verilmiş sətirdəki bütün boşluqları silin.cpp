16 Verilmiş sətirdəki bütün boşluqları silin.
Giriş: "Salam Dünya"
Çıxış: "SalamDünya"

#include <iostream>
using namespace std;

int main() 
{
    string metn, netice = "";
    cout << "Sətiri daxil edin: ";
    getline(cin, metn);

    for (char simvol : metn) 
    {
        if (simvol != ' ') // Əgər boşluq deyilsə
        { 
            netice += simvol; // Yeni sətirə əlavə et
        }
    }

    cout << "Nəticə: " << netice << endl;
    return 0;
}

/*
getline(cin, metn) – istifadəçidən tam bir sətir alır.

for (char simvol : metn) – hər simvolu tək-tək yoxlayır.

if (simvol != ' ') – yalnız boşluq olmayan simvolları netice stringinə əlavə edir.

Beləliklə, bütün boşluqlar çıxarılır.
*/