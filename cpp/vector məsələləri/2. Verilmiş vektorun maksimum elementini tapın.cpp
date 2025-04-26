/*
2. Verilmiş vektorun maksimum elementini tapın.
Giriş: {1, 5, 3, 9, 7}
Çıxış: 9

*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Vektoru yaradırıq
    vector<int> vektor = {1, 5, 3, 9, 7};

    // İlk elementi maksimum qəbul edirik
    int maksimum = vektor[0];

    // Bütün vektor elementləri üzərində gəzib ən böyüyünü tapırıq
    for (int eded : vektor) 
    {
        if (eded > maksimum) 
        {
            maksimum = eded; // Əgər tapdığımız ədəd daha böyükdürsə, maksimumu yeniləyirik
        }
    }

    // Maksimum elementin çapı
    cout << "Maksimum element: " << maksimum << endl;

    return 0;
}
