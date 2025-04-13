9 Verilmiş iki söz arasında hansı hərflərin ümumi olduğunu tapın.
Giriş: "alma", "balıq"
Çıxış: a, l

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() 
{
    string soz1, soz2;
    cout << "Birinci sözü daxil edin: ";
    cin >> soz1;

    cout << "İkinci sözü daxil edin: ";
    cin >> soz2;

    set<char> herfler1;  // Birinci sözün hərflərini saxlayır
    set<char> umumiler;  // Ümumi hərfləri saxlayır

    // Birinci sözdəki bütün hərfləri əlavə edirik
    for (char c : soz1) 
    {
        herfler1.insert(c);
    }

    // İkinci sözdəki hərfləri yoxlayırıq və əgər birinci sözdə də varsa ümumi siyahıya əlavə edirik
    for (char c : soz2) 
    {
        if (herfler1.count(c)) 
        {
            umumiler.insert(c);
        }
    }

    // Nəticəni çap edirik
    cout << "Ümumi hərflər: ";
    for (char c : umumiler) 
    {
        cout << c << " ";
    }

    cout << endl;
    return 0;
}

/*
set<char> həm təkrarsızlıq, həm də səliqəli saxlanış üçün istifadə olunur.

İlk dövrdə soz1-in hərfləri herfler1 adlı set-ə əlavə olunur.

İkinci dövrdə soz2-dəki hərflər herfler1 ilə yoxlanılır. Əgər varsa, umumiler set-inə əlavə olunur.

Sonda umumiler çap edilir.
*/
