/*
16. Vektorda dublikatları silin.
Giriş: {1, 2, 2, 3, 3, 3, 4}
Çıxış: {1, 2, 3, 4}
*/

#include <iostream>        // Konsola giriş/çıxış üçün
#include <vector>          // Vektor istifadəsi üçün
#include <algorithm>       // unique və erase funksiyaları üçün
using namespace std;

int main() 
{
    // Başlanğıc vektoru
    vector<int> vektor = {1, 2, 2, 3, 3, 3, 4};

    // Vektordakı dublikatları silmək üçün sort və unique funksiyalarını istifadə edirik
    sort(vektor.begin(), vektor.end());  // İlk olaraq vektoru artan sıraya görə sıralayırıq

    // unique funksiyası sıralanmış vektor üzərində dublikatları tapır və onları aradan qaldırır
    vektor.erase(unique(vektor.begin(), vektor.end()), vektor.end());  // unique funksiyası təkrarlanan elementləri kənara atır

    // Unikal elementləri çap edirik
    cout << "Unikal elementlər: ";
    for (int eded : vektor) 
    {
        cout << eded << " ";  // Hər bir unikal elementi çap edirik
    }
    cout << endl;

    return 0;
}


/*
Izah:
sort(vektor.begin(), vektor.end()); - Vektoru əvvəlcə sıralayırıq. Bu, dublikatların arxada yerləşməsini təmin edir, çünki sıralanmamış vektorda eyni elementlər qarışıq yerləşə bilər.
unique(vektor.begin(), vektor.end()); - unique funksiyası sıralanmış vektor üzərində işləyir və təkrarlanan elementləri kənara atır. Lakin, unique funksiyası yalnız təkrarlanan elementləri vektorun əvvəlində aradan qaldırır, lakin bunları fiziki olaraq silmir. Bu səbəbdən erase() funksiyasını istifadə edirik.
vektor.erase(...); - erase funksiyası, unique tərəfindən təkrarlananları kənara atılan elementlərdən sonra, həmin elementləri vektordan silmək üçün istifadə edilir.
*/