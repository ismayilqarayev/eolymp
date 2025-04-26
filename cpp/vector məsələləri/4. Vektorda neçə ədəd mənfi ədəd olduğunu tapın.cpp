/*
4. Vektorda neçə ədəd mənfi ədəd olduğunu tapın.
Giriş: {-1, 2, -3, 4, -5}
Çıxış: 3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Vektoru yaradırıq
    vector<int> vektor = {-1, 2, -3, 4, -5};

    int menfiSay = 0; // Mənfi ədədlərin sayını saxlayacaq dəyişən

    // Vektorun bütün elementlərini yoxlayırıq
    for (int eded : vektor) 
    {
        if (eded < 0) 
        {
            menfiSay++; // Əgər ədəd mənfidirsə, say artırılır
        }
    }

    // Nəticəni çap edirik
    cout << "Menfi ededlerin sayi: " << menfiSay << endl;

    return 0;
}
