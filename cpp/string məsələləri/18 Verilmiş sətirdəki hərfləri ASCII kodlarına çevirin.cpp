18 Verilmiş sətirdəki hərfləri ASCII kodlarına çevirin.
Giriş: "AB"
Çıxış: 65 66

#include <iostream>
using namespace std;

int main() 
{
    string soz;
    cin >> soz;

    for (char herf : soz) 
    {
        cout << int(herf) << " ";
    }

    return 0;
}
