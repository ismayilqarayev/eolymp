5 Verilmiş söz palindromdurmu?
Giriş: "level"
Çıxış: true

#include <iostream>   // Giriş-çıxış funksiyaları üçün
#include <string>     // string sinfi üçün
using namespace std;

int main() 
{
    string soz;
    cout << "Sozu daxil edin: ";
    cin >> soz;

    // Tərsinə söz yaratmaq
    string tersSoz = string(soz.rbegin(), soz.rend());

    // Əgər original söz və tərs söz eynidirsə, palindromdur
    if (soz == tersSoz) 
    {
        cout << "true" << endl; // Palindromdur
    }
     
    else 
    {
        cout << "false" << endl; // Palindrom deyil
    }

    return 0;
}
