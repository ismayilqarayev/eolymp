/*
23. Vektorun içindəki ən uzun artan ardıcıllığın uzunluğunu tapın.
Giriş: {1, 2, 1, 2, 3} 
Çıxış: 3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> v = {1, 2, 1, 2, 3}; // Verilmiş vektor

    int maxUzunluq = 1; // Ən uzun artan ardıcıllığın uzunluğu
    int cariUzunluq = 1; // Hal-hazırki ardıcıllığın uzunluğu

    for (int i = 1; i < v.size(); i++) 
    {
        if (v[i] > v[i - 1]) 
        {
            cariUzunluq++; // Əgər əvvəlki ədəddən böyükdürsə, ardıcıllığı artır
            if (cariUzunluq > maxUzunluq) 
            {
                maxUzunluq = cariUzunluq; // Ən böyük uzunluğu yenilə
            }
        } 
        
        else 
        {
            cariUzunluq = 1; // Əks halda sıfırdan başla
        }
    }

    cout << maxUzunluq << endl; // Nəticəni çap et

    return 0;
}

