/*
20. Verilmiş vektorda elementlərin neçə dəfə təkrarlandığını çap edin.
Giriş: {1, 2, 2, 3, 3, 3}
Çıxış: 1: 1, 2: 2, 3: 3
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void elementlerinTekrariniTap(const vector<int>& vektor) 
{
    unordered_map<int, int> tekrarSayisi;  // Elementlərin təkrarını saxlamaq üçün xəritə

    // Vektorun hər bir elementini dövr edərək təkrarlamalarını sayırıq
    for (int eded : vektor) 
    {
        tekrarSayisi[eded]++;  // Hər bir elementin sayını artırırıq
    }

    // Təkrarlanan elementləri çap edirik
    for (const auto& pair : tekrarSayisi) 
    {
        cout << pair.first << ": " << pair.second << ", ";  // Element və təkrar sayı
    }
    cout << endl;
}

int main() 
{
    // Verilmiş vektor
    vector<int> vektor = {1, 2, 2, 3, 3, 3};

    // Elementlərin təkrarını tapıb çap etmək
    elementlerinTekrariniTap(vektor);

    return 0;
}
