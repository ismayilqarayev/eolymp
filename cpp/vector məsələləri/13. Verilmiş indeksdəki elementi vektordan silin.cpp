/*
13. Verilmiş indeksdəki elementi vektordan silin.
Giriş: {1, 2, 3, 4}, index = 2
Çıxış: {1, 2, 4}
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Başlangıç vektoru
    vector<int> vektor = {1, 2, 3, 4};
    int index = 2; // Silinəcək elementin indeksi

    // Vektorun verilmiş indeksdəki elementini silirik
    vektor.erase(vektor.begin() + index);

    // Nəticəni ekrana çap edirik
    for (int eded : vektor) 
    {
        cout << eded << " ";
    }
    cout << endl;

    return 0;
}
