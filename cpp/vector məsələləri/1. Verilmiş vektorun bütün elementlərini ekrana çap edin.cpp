/*
1. Verilmiş vektorun bütün elementlərini ekrana çap edin.
Giriş: {1, 2, 3, 4, 5}
Çıxış: 1 2 3 4 5
*/


#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Vektoru yaradırıq və dəyərləri təyin edirik
    vector<int> vektor = {1, 2, 3, 4, 5};

    // Vektorun bütün elementlərini çap edirik
    for (int eded : vektor) 
    {
        cout << eded << " ";
    }

    return 0;
}

