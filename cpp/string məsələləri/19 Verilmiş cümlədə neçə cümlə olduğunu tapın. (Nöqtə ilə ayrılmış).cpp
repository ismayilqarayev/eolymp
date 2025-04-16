19 Verilmiş cümlədə neçə cümlə olduğunu tapın. (Nöqtə ilə ayrılmış)
Giriş: "Salam. Mən gəlmişəm. Necəsən?"
Çıxış: 3

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string cumle;
    cout << "Cumleni daxil edin: ";
    getline(cin, cumle); // İstifadəçidən tam sətri oxuyuruq

    int cumleSayi = 0;

    // Sətirdəki hər bir simvola baxırıq
    for (char simvol : cumle) 
    {
        // Əgər simvol cümlə sonu simvollarındandırsa, sayını artırırıq
        if (simvol == '.' || simvol == '?' || simvol == '!') 
        {
            cumleSayi++;
        }
    }

    cout << "Cumle sayi: " << cumleSayi << endl;

    return 0;
}
