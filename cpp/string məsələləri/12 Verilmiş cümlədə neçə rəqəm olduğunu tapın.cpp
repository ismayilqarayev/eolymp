12 Verilmiş cümlədə neçə rəqəm olduğunu tapın.
Giriş: "Evimiz 22 nömrəlidir"
Çıxış: 2

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // İstifadəçidən cümləni alırıq
    string cumle;
    cout << "Cümləni daxil edin: ";
    getline(cin, cumle);

    int reqemSayi = 0; // Rəqəmlərin sayını saxlayacaq dəyişən

    // Cümlənin hər bir simvoluna baxırıq
    for (char simvol : cumle) 
    {
        if (isdigit(simvol)) 
        { // Əgər simvol rəqəmdirsə (0-9)
            reqemSayi++;
        }
    }

    // Nəticəni ekrana çıxarırıq
    cout << "Rəqəmlərin sayı: " << reqemSayi << endl;

    return 0;
}

/*
getline(cin, cumle) funksiyası ilə boşluqlarla birlikdə tam cümlə alınır.

isdigit(simvol) funksiyası hər bir simvolun rəqəm olub olmadığını yoxlayır.

Tapılan hər rəqəm üçün reqemSayi dəyişəni artırılır.

Sonda isə nəticə çap olunur.
*/
