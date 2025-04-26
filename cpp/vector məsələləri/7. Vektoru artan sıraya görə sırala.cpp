/*
7. Vektoru artan sıraya görə sırala.
Giriş: {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}
Çıxış: {1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9}
*/

#include <iostream>
#include <vector>
#include <algorithm> // sort funksiyası üçün
using namespace std;

int main() 
{
    // Vektor yaradılır
    vector<int> vektor = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Vektoru artan sıraya görə sırala
    sort(vektor.begin(), vektor.end());

    // Sıralanmış vektoru çap et
    for (int eded : vektor) 
    {
        cout << eded << " ";
    }

    return 0;
}
