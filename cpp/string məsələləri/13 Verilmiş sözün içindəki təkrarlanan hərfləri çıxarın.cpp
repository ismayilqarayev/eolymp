13 Verilmiş sözün içindəki təkrarlanan hərfləri çıxarın.
Giriş: "programming"
Çıxış: "progamin"

#include <iostream>
using namespace std;

int main() 
{
    string soz, netice = "";
    cout << "Sözü daxil edin: ";
    cin >> soz;

    for (int i = 0; i < soz.length(); i++) 
    {
        bool tekrarVar = false;

        // Bu hərf artıq nəticədə varsa, əlavə etmə
        for (int j = 0; j < netice.length(); j++) 
        {
            if (soz[i] == netice[j]) 
            {
                tekrarVar = true;
                break;
            }
        }

        if (!tekrarVar) 
        {
            netice += soz[i]; // Hərf təkrarlanmırsa əlavə et
        }
    }

    cout << "Təkrarsız söz: " << netice << endl;

    return 0;
}

/*
1. string soz, netice = "";
soz istifadəçidən daxil ediləcək sözdür.

netice isə təkrarlanmayan hərflərin yerləşəcəyi nəticə stringidir (boş başlayır).

2. cin >> soz;
İstifadəçidən bir söz daxil edilir.

3. for (int i = 0; i < soz.length(); i++)
Bu döngü soz-dəki hər bir hərf üçün işləyir.

4. bool tekrarVar = false;
Hər dövrədə bu dəyişən false olur. Sonra yoxlayacağıq ki, bu hərf artıq nəticəyə əlavə olunubmu?

5. for (int j = 0; j < netice.length(); j++)
netice-də bu hərfin daha əvvəl əlavə olunub-olunmadığını yoxlayırıq.

6. if (soz[i] == netice[j])
Əgər həmin hərf nəticədə varsa:

tekrarVar = true olur.

break; ilə döngüdən çıxırıq (çünki artıq təkrar olduğunu bildik).

7. if (!tekrarVar)
Əgər həmin hərf nəticədə yoxdursa, onu nəticəyə əlavə edirik:

netice += soz[i];

8. cout << "Təkrarsız söz: " << netice << endl;
Nəticə olaraq təkrarlanmayan hərflərdən ibarət yeni söz ekrana verilir.


*/
