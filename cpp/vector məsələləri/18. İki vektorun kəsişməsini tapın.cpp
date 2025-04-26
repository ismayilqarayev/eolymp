/*
18. İki vektorun kəsişməsini tapın.
Giriş: {1, 2, 3}, {2, 3, 4}
Çıxış: {2, 3}
*/

/*
Kodun izahı:
vektorKesisme funksiyası:
İki vektoru qəbul edir (vektor1 və vektor2).
Birinci vektorun hər bir elementi üçün, həmin elementin ikinci vektorun içində olub-olmaması find funksiyası ilə yoxlanılır.
Əgər element kəsişmə varsa, o element kəsişmə vektoruna əlavə edilir.
main funksiyası:
Nümunə olaraq iki vektor (vektor1 və vektor2) yaradılır.
vektorKesisme funksiyası çağırılır və kəsişmə nəticəsi (kesisme) çap olunur.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// İki vektorun kəsişməsini tapmaq üçün funksiya
vector<int> vektorKesisme(const vector<int>& vektor1, const vector<int>& vektor2) 
{
    vector<int> kesisme;  // Kəsişmə vektoru
    for (int eded : vektor1) 
    {  // Birinci vektorun hər bir elementi
        // İkinci vektorda həmin element varsa, onu kəsişmə vektoruna əlavə edirik
        if (find(vektor2.begin(), vektor2.end(), eded) != vektor2.end()) 
        {
            kesisme.push_back(eded);
        }
    }
    return kesisme;  // Kəsişmə vektorunu qaytarırıq
}

int main() 
{
    // İki vektorun daxil edilməsi
    vector<int> vektor1 = {1, 2, 3};
    vector<int> vektor2 = {2, 3, 4};

    // Kəsişmə vektorunu tapmaq
    vector<int> kesisme = vektorKesisme(vektor1, vektor2);

    // Nəticəni çap etmək
    cout << "Kəsişmə: ";
    for (int eded : kesisme) 
    {
        cout << eded << " ";  // Kəsişmə vektorunun bütün elementlərini çap edirik
    }
    cout << endl;

    return 0;
}
