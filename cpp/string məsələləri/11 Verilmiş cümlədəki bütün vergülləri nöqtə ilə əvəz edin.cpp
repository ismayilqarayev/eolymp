11 Verilmiş cümlədəki bütün vergülləri nöqtə ilə əvəz edin.
Giriş: "Salam, necəsən, dostum"
Çıxış: "Salam. necəsən. dostum"

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    // İstifadəçidən cümlə alınır
    string cumle;
    cout << "Zəhmət olmasa cümləni daxil edin: ";
    getline(cin, cumle);

    // Hər simvolu yoxlayırıq
    for (char &herf : cumle) 
    {
        if (herf == ',') 
        {
            herf = '.'; // Əgər vergüldürsə, nöqtəyə çevir
        }
    }

    // Nəticəni insan kimi təqdim edirik
    cout << "\nCümlədəki vergülləri nöqtə ilə əvəz etdim:\n";
    cout << cumle << endl;

    return 0;
}
