2 Verilmiş iki sözün anagram olub olmadığını yoxlayın.
Giriş: "listen", "silent"
Çıxış: true

#include <iostream>   // Giriş-çıxış üçün
#include <algorithm>  // sort funksiyası üçün
using namespace std;

bool AnagramYoxla(string soz1, string soz2) 
{
    // Əgər uzunluqları eyni deyilsə, anagram ola bilməz
    if (soz1.length() != soz2.length())
        return false;

    // Hər iki sözü əlifba sırasına görə düzürük
    sort(soz1.begin(), soz1.end());
    sort(soz2.begin(), soz2.end());

    // Əgər sıralanmış sözlər eynidirsə, deməli anagramdır
    return soz1 == soz2;
}

int main() 
{
    string soz1, soz2;

    cout << "Birinci sözü daxil edin: ";
    cin >> soz1;

    cout << "İkinci sözü daxil edin: ";
    cin >> soz2;

    // Anagram olub olmadığını yoxlayırıq və nəticəni yazdırırıq
    if (AnagramYoxla(soz1, soz2)) {
        cout << "true (Anagramdir)" << endl;
    } else {
        cout << "false (Anagram deyil)" << endl;
    }

    return 0;
}
