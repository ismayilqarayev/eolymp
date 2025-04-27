/*
27. Verilmiş vektorda ədədin neçə dəfə təkrarlandığını tapın.
Giriş: {1, 2, 3, 1, 4, 1}, x = 1
Çıxış: 3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> v = {1, 2, 3, 1, 4, 1};
    int x = 1;
    int say = 0;

    for (int i = 0; i < v.size(); i++) 
    {
        if (v[i] == x) 
        {
            say++; // x ədədinə bərabərdirsə, say artır
        }
    }

    cout << say; // nəticəni ekrana çıxarırıq

    return 0;
}
