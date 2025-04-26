/*
6. Vektoru tərsinə çevirin.
Giriş: {1, 2, 3, 4, 5}
Çıxış: {5, 4, 3, 2, 1}
*/

#include <iostream>
#include <vector>
#include <algorithm> // reverse funksiyası üçün
using namespace std;

int main() 
{
    // Vektor yaradılır
    vector<int> vektor = {1, 2, 3, 4, 5};

    // Vektoru tərsinə çeviririk
    reverse(vektor.begin(), vektor.end());

    // Tərsinə çevrilmiş vektoru çap edirik
    for (int eded : vektor) 
    {
        cout << eded << " ";
    }

    return 0;
}
