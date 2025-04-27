/*
26. Verilmiş vektorda elementlərin cəmini tapın.
Giriş: {1, 2, 3, 4, 5}
Çıxış: 15
*/

/*
cem adlı dəyişən yaradıb sıfırdan başlayırıq.
Vektordakı hər bir ədədi cem dəyişəninə əlavə edirik.
Ən sonda cəmi çap edirik.

Nümunə:
Giriş: {1, 2, 3, 4, 5}
Hesablama: 1+2+3+4+5 = 15
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> v = {1, 2, 3, 4, 5};
    int cem = 0;

    for (int i = 0; i < v.size(); i++) 
    {
        cem += v[i]; // hər elementi cəmin üzərinə gəlirik
    }

    cout << cem; // nəticəni ekrana çıxarırıq

    return 0;
}
