7 Verilmiş cümlədə böyük hərflərin sayını tapın.
Giriş: "SalAm DüNyA" 
Çıxış: 5


#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string cumle;
    int boyukHerfSayi = 0;

    cout << "Cümləni daxil edin: ";
    getline(cin, cumle);  // Tam cümləni oxuyur

    for (char herf : cumle)
    {
        // Hər bir simvolun böyük hərf olub olmadığını yoxlayırıq
        if (isupper(herf)) 
        {
            boyukHerfSayi++;  // Əgər böyük hərfdirsə say artırılır
        }
    }

    cout << "Böyük hərflərin sayı: " << boyukHerfSayi << endl;

    return 0;
}

