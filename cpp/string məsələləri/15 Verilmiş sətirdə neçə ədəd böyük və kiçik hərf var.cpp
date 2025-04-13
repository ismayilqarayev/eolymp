15 Verilmiş sətirdə neçə ədəd böyük və kiçik hərf var?
Giriş: "HeLLo WoRLd" 
Çıxış: Böyük: 6, Kiçik: 4

#include <iostream>
using namespace std;

int main() 
{
    string cumle;
    int boyuk = 0, kicik = 0;

    cout << "Cümləni daxil edin: ";
    getline(cin, cumle); // Sətir daxil etmək üçün

    // Hərfləri yoxlayırıq
    for (char herf : cumle) 
    {
        if (isupper(herf)) // Əgər böyük hərfdirsə
            boyuk++;
        else if (islower(herf)) // Əgər kiçik hərfdirsə
            kicik++;
    }

    cout << "Böyük: " << boyuk << ", Kiçik: " << kicik << endl;

    return 0;
}


/*
İzah:
getline(cin, cumle); — istifadəçidən boşluqlarla birlikdə tam sətir alır.

isupper(herf) — hərfin böyük olub olmadığını yoxlayır.

islower(herf) — hərfin kiçik olub olmadığını yoxlayır.

boyuk++ və kicik++ — uyğun olaraq sayları artırırıq.
*/