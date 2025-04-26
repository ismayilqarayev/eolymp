/*
9. Verilmiş ədədin vektorda olub olmadığını yoxlayın.
Giriş: {1, 2, 3, 4, 5}, x = 3
Çıxış: Yes
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Vektor və axtarılan ədəd
    vector<int> vektor = {1, 2, 3, 4, 5};
    int x = 3;
    bool tapildi = false;

    // Vektorun içində x ədədini axtarırıq
    for (int eded : vektor) 
    {
        if (eded == x) 
        {
            tapildi = true;
            break; // Tapsaq, daha davam etməyə ehtiyac yoxdur
        }
    }

    // Nəticəni ekrana çıxarırıq
    if (tapildi)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
