20 Verilmiş sözün içində ’a’ hərfi neçə dəfə təkrarlanıb?
Giriş: "avtobus" Çıxış: 1

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string soz;
    int say = 0;

    cout << "Sozu daxil edin: ";
    cin >> soz;  // istifadəçidən sözü oxuyuruq

    // hər simvolu yoxlayırıq
    for (char herf : soz) 
    {
        if (herf == 'a' || herf == 'A') 
        { // həm kiçik, həm böyük 'a' üçün
            say++;
        }
    }

    cout << "'a' herfi sayi: " << say << endl;

    return 0;
}


