/*
8. Vektoru azalan sıraya görə sırala.
Giriş: {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}
Çıxış: {9, 6, 5, 5, 5, 4, 3, 3, 2, 1, 1}
*/

#include <iostream>
#include <vector>
#include <algorithm> // sort funksiyası üçün
using namespace std;

int main() 
{
    // Başlanğıc vektor
    vector<int> vektor = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Vektoru azalan sıraya görə sırala
    sort(vektor.rbegin(), vektor.rend());

    // Sıralanmış vektoru çap et
    for (int eded : vektor) 
    {
        cout << eded << " ";
    }

    return 0;
}
