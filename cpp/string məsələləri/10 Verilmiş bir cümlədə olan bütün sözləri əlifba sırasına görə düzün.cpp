10 Verilmiş bir cümlədə olan bütün sözləri əlifba sırasına görə düzün.
Giriş: "alma gilas armud"
Çıxış: "alma armud gilas"

#include <iostream>
#include <sstream>   // stringləri sözlərə ayırmaq üçün
#include <vector>
#include <algorithm> // sort funksiyası üçün

using namespace std;

int main() 
{
    string cumle;
    cout << "Cümləni daxil edin: ";
    getline(cin, cumle);  // cümləni tam oxumaq üçün getline istifadə olunur

    stringstream ss(cumle);  // stringləri sözlərə ayırmaq üçün
    string soz;
    vector<string> sozler;

    // Cümləni sözlərə ayırıb vektora əlavə edirik
    while (ss >> soz) 
    {
        sozler.push_back(soz);
    }

    // Əlifba sırasına görə sırala
    sort(sozler.begin(), sozler.end());

    // Nəticəni çap et
    cout << "Əlifba sırası ilə düzülmüş sözlər: ";
    for (const string& s : sozler) 
    {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}

/*
getline(cin, cumle) → boşluqlu cümləni tam oxuyur.

stringstream → cümləni boşluqlara görə sözlərə ayırır.

vector<string> → sözləri dinamik olaraq saxlayır.

sort() → sözləri əlifba sırasına görə düzür.

for dövrü ilə nəticə çap edilir.
*/
