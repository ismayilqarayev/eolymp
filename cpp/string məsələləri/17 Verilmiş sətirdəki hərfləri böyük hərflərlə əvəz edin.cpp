17 Verilmiş sətirdəki hərfləri böyük hərflərlə əvəz edin.
Giriş: "salam"
Çıxış: "SALAM"


#include <iostream> // Giriş-çıxış funksiyalarını təmin edir
using namespace std; // std ad məkanını (namespace) istifadə edirik ki, cout və cin kimi ifadələri rahat yazaq

int main() 
{
    string metn; // İstifadəçidən alınacaq mətn üçün dəyişən

    cout << "Metni daxil et: "; // İstifadəçidən məlumat istənilir
    cin >> metn; // İstifadəçi mətni daxil edir (yalnız birinci boşluğa qədər oxuyur)

    // Dövr vasitəsilə bütün simvolları sıra ilə yoxlayırıq
    for (int i = 0; i < metn.length(); i++) 
    {
        // Əgər simvol kiçik hərfdirsə ('a' ilə 'z' arasında)
        if (metn[i] >= 'a' && metn[i] <= 'z') 
        {
            metn[i] = metn[i] - 32; // Kiçik hərfi böyük hərfə çevir (ASCII fərqi 32-dir)
        }
    }

    // Nəticəni ekrana çap et
    cout << "Nəticə: " << metn << endl;

    return 0; // Proqram uğurla başa çatdı
}

