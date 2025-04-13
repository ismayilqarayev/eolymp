4 Verilmiş cümlədəki söz sayını hesablayın.
Giriş: "C++ dilini öyrənirəm"
Çıxış: 3

#include <iostream>   // Standart giriş-çıxış
#include <sstream>    // istringstream sinfi üçün
#include <string>     // string üçün
using namespace std;

int main() 
{
    string cumle;

    // İstifadəçidən cümləni daxil etməsini istəyirik
    cout << "Cumleni daxil edin: ";
    getline(cin, cumle);  // Bütün sətri oxumaq üçün getline istifadə olunur

    int say = 0; // Sözlərin sayını saxlamaq üçün dəyişən
    istringstream stream(cumle); // Cümləni sözlərə ayırmaq üçün

    string soz;
    while (stream >> soz) 
    {
        say++; // Hər söz tapıldıqca say artırılır
    }

    cout << "Sozlerin sayi: " << say << endl;

    return 0;
}
