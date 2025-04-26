/*
19. İki vektorun birləşməsini tapın.
Giriş: {1, 2, 3}, {4, 5, 6}
Çıxış: {1, 2, 3, 4, 5, 6}
*/

#include <iostream>
#include <vector>
using namespace std;

// İki vektorun birləşməsini tapmaq üçün funksiya
vector<int> vektorBirlashma(const vector<int>& vektor1, const vector<int>& vektor2) 
{
    vector<int> birlesme = vektor1;  // Birinci vektoru yeni vektora kopyalayırıq
    birlesme.insert(birlesme.end(), vektor2.begin(), vektor2.end());  // İkinci vektoru birləşdiririk
    return birlesme;  // Birləşmiş vektoru qaytarırıq
}

int main() 
{
    // İki vektorun daxil edilməsi
    vector<int> vektor1 = {1, 2, 3};
    vector<int> vektor2 = {4, 5, 6};

    // Birləşmə vektorunu tapmaq
    vector<int> birlesme = vektorBirlashma(vektor1, vektor2);

    // Nəticəni çap etmək
    cout << "Birləşmə: ";
    for (int eded : birlesme) 
    {
        cout << eded << " ";  // Birləşmiş vektorun bütün elementlərini çap edirik
    }
    cout << endl;

    return 0;
}
