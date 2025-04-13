8 Verilmiş sətirdəki hər bir sözün ilk hərfini böyük hərfə çevirin.
Giriş: "c++ dili maraqlıdır"
Çıxış: "C++ Dili Maraqlıdır"

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string cumle;

    cout << "Cumleni daxil edin: ";
    getline(cin, cumle); // İstifadəçidən tam cümləni alırıq

    bool yeniSoz = true; // Yeni söz başladığını izləmək üçün dəyişən

    for (int i = 0; i < cumle.length(); i++) 
    {
        if (isspace(cumle[i])) 
        {
            // Əgər boşluq görüksə, növbəti hərf yeni sözün əvvəlidir
            yeniSoz = true;
        } 

        else if (yeniSoz && isalpha(cumle[i])) 
        {
            // Əgər yeni söz başlayıbsa və hərfdirsə, onu böyük hərfə çevir
            cumle[i] = toupper(cumle[i]);
            yeniSoz = false; // Artıq sözün içindəyik
        } 

        else 
        {
            yeniSoz = false;
        }
    }

    cout << "Nəticə: " << cumle << endl;

    return 0;
}

/*
getline() ilə bütün sətir oxunur.

yeniSoz dəyişəni hər yeni sözün əvvəlini izləmək üçün istifadə olunur.

isspace() boşluq olub olmadığını yoxlayır.

isalpha() simvolun hərf olub olmadığını yoxlayır.

toupper() həmin hərfi böyük hərfə çevirir.
*/