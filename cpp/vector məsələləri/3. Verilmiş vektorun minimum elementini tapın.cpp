/*
3. Verilmiş vektorun minimum elementini tapın.
Giriş: {1, 5, 3, 9, 7}
Çıxış: 1
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Vektoru yaradırıq
    vector<int> vektor = {1, 5, 3, 9, 7};

    // İlk elementi minimum kimi qəbul edirik
    int minimum = vektor[0];

    // Vektorun bütün elementlərini yoxlayırıq
    for (int eded : vektor) 
    {
        if (eded < minimum) 
        {
            minimum = eded; // Əgər tapdığımız ədəd daha kiçikdirsə, minimumu yeniləyirik
        }
    }

    // Minimum elementin çapı
    cout << "Minimum element: " << minimum << endl;

    return 0;
}
