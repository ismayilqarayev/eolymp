/*
5. Verilmiş vektorda ədədi orta tapın.
Giriş: {1, 2, 3, 4, 5}
Çıxış: 3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Vektoru yaradırıq
    vector<int> vektor = {1, 2, 3, 4, 5};

    int cem = 0; // Elementlərin cəmini saxlayacaq dəyişən

    // Vektorun bütün elementlərini toplayırıq
    for (int eded : vektor)
    {
        cem += eded; // Hər elementi cəmin üstünə gəlirik
    }

    // Ədədi orta cəmin element sayına bölünməsi ilə tapılır
    double edediOrta = (double)cem / vektor.size();

    // Nəticəni çap edirik
    cout << "Ededi orta: " << edediOrta << endl;

    return 0;
}
