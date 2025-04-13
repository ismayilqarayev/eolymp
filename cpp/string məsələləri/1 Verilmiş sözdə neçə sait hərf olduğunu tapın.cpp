1 Verilmiş sözdə neçə sait hərf olduğunu tapın.

Giriş: "Salam"
Çıxış: 2


#include <iostream>  // Ekrana çıxış və klaviaturadan giriş üçün
using namespace std;

int main() 
{
    string soz;      // İstifadəçidən alınacaq söz
    int saitSayi = 0; // Saitlərin sayını saxlamaq üçün dəyişən

    cout << "Soz daxil edin: ";  // İstifadəçidən söz tələb olunur
    cin >> soz;                  // Söz daxil edilir

    // Sözün hər bir hərfi üzərində dövr qururuq
    for (int i = 0; i < soz.length(); i++) 
    {
        char herf = tolower(soz[i]); // Hərfi kiçik formaya çeviririk (məsələn, 'A' -> 'a')

        // Əgər hərf saitdirsə (azərbaycanca saitlər)
        if (herf == 'a' || herf == 'e' || herf == 'ə' || herf == 'i' ||
            herf == 'ı' || herf == 'o' || herf == 'ö' || herf == 'u' || herf == 'ü') 
            {
            saitSayi++; // Sait tapıldıqda say artırılır
        }
    }

    // Nəticəni ekrana yazdırırıq
    cout << "Saitlerin sayi: " << saitSayi << endl;

    return 0; // Proqramın uğurla tamamlandığını bildirir
}
