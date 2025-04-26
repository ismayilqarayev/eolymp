/*
14. Vektordakı bütün elementləri 2-yə vurun.
Giriş: {1, 2, 3, 4, 5}
Çıxış: {2, 4, 6, 8, 10}
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Başlangıç vektoru
    vector<int> vektor = {1, 2, 3, 4, 5};

    // Vektorun bütün elementlərini 2-yə vururuq
    for (int& eded : vektor) 
    {
        eded *= 2; // Hər bir elementi 2-yə vururuq
    }

    // Nəticəni ekrana çap edirik
    for (int eded : vektor) 
    {
        cout << eded << " ";
    }
    cout << endl;

    return 0;
}

