/*
24. Vektorda sıfır olmayan elementləri əvvələ, sıfırları sona qoyun.
Giriş: {1, 0, 3, 0, 5}
Çıxış: {1, 3, 5, 0, 0}
*/

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> v = {1, 0, 3, 0, 5}; // Verilmiş vektor
    vector<int> yeni; // Sıfır olmayanlar üçün yeni vektor

    int sifirSayi = 0; // Sıfırların sayını saxlayacaq

    for (int i = 0; i < v.size(); i++) 
    {
        if (v[i] != 0) 
        {
            yeni.push_back(v[i]); // Sıfır olmayanları əlavə edirik
        } 

        else 
        {
            sifirSayi++; // Sıfırları sayırıq
        }
    }

    for (int i = 0; i < sifirSayi; i++) 
    {
        yeni.push_back(0); // Axıra sıfırları əlavə edirik
    }

    // Nəticəni çap edirik
    for (int i = 0; i < yeni.size(); i++) 
    {
        cout << yeni[i] << " ";
    }

    return 0;
}
