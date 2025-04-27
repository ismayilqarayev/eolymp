/*
25. Vektoru ədədi orta ətrafında sıralayın.
Giriş: {1, 2, 3, 4, 5}
Çıxış: {3, 1, 2, 4, 5}
*/

//------------------------------
/*
Bütün ədədlərin cəmini tapırıq (cem).
Cəmi element sayına bölüb ədədi orta (orta) tapırıq.
Əvvəlcə ədədi ortanı yeni vektora qoyuruq.
Sonra qalan elementləri ardıcıl əlavə edirik.
Sonda hamısını çap edirik.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> yeni;

    int cem = 0;
    for (int i = 0; i < v.size(); i++) 
    {
        cem += v[i];
    }
    int orta = cem / v.size(); // Ədədi ortanı tapırıq

    yeni.push_back(orta); // Ədədi ortanı əvvəl əlavə edirik

    // Orta olmayanları əlavə edirik
    for (int i = 0; i < v.size(); i++) 
    {
        if (v[i] != orta) 
        {
            yeni.push_back(v[i]);
        }
    }

    // Nəticəni çap edirik
    for (int i = 0; i < yeni.size(); i++) 
    {
        cout << yeni[i] << " ";
    }

    return 0;
}
