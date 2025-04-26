/*
12. Verilmiş ədədi vektorun sonuna əlavə edin.
Giriş: {1, 2, 3}, x = 4
Çıxış: {1, 2, 3, 4}
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Başlangıç vektoru
    vector<int> vektor = {1, 2, 3};
    int x = 4; // Əlavə ediləcək ədəd

    // Vektorun sonuna ədəd əlavə edirik
    vektor.push_back(x);

    // Nəticəni ekrana çap edirik
    for (int eded : vektor) 
    {
        cout << eded << " ";
    }
    cout << endl;

    return 0;
}
