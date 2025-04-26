/*
10. Vektorda neçə dənə tək ədəd olduğunu tapın.
Giriş: {1, 2, 3, 4, 5} 
Çıxış: 3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Vektor yaradılır
    vector<int> vektor = {1, 2, 3, 4, 5};
    int tekSay = 0; // Tək ədədlərin sayını saxlayacaq

    // Vektorun bütün elementlərinə baxırıq
    for (int eded : vektor) 
    {
        if (eded % 2 != 0) 
        { // Əgər ədəd təkdirsə
            tekSay++; // Sayı 1 artır
        }
    }

    // Nəticəni ekrana çıxarırıq
    cout << tekSay << endl;

    return 0;
}
