6 Verilmiş cümlədə ən uzun sözü tapın.
Giriş: "Salam dünya proqramlaşdırma"
Çıxış: "proqramlaşdırma"

#include <iostream>  // Giriş-çıxış üçün
#include <sstream>   // String cümləni sözlərə bölmək üçün
#include <string>    // string istifadə üçün
using namespace std;

int main() 
{
    string cumle;
    cout << "Cümləni daxil edin: ";
    getline(cin, cumle);  // Tam cümləni oxumaq üçün getline istifadə olunur

    stringstream ss(cumle);  // Cümləni söz-söz parçalamaq üçün stringstream
    string soz;
    string enUzun = "";

    while (ss >> soz) 
    {
        if (soz.length() > enUzun.length()) 
        {
            enUzun = soz;  // Ən uzun sözü yadda saxlayırıq
        }
    }

    cout << "Ən uzun söz: " << enUzun << endl;

    return 0;
}
