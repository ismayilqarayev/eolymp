/*
11. Vektorda neçə dənə cüt ədəd olduğunu tapın.
Giriş: {1, 2, 3, 4, 5}
Çıxış: 2
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Vektor yaradılır
    vector<int> vektor = {1, 2, 3, 4, 5};
    int cutSay = 0; // Cüt ədədlərin sayını saxlayacaq

    // Vektorun bütün elementlərinə baxırıq
    for (int eded : vektor) 
    {
        if (eded % 2 == 0) 
        { // Əgər ədəd cütdürsə
            cutSay++; // Sayı 1 artır
        }
    }

    // Nəticəni ekrana çıxarırıq
    cout << cutSay << endl;

    return 0;
}
