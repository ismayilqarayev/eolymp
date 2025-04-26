/*
17. İki vektorun cəmini tapan funksiya yazın.
Giriş: {1, 2, 3}, {4, 5, 6}
Çıxış: {5, 7, 9}
*/

#include <iostream>
#include <vector>
using namespace std;

// İki vektorun cəmini tapan funksiya
vector<int> vektorCemi(const vector<int>& vektor1, const vector<int>& vektor2) 
{
    vector<int> cem;  // Cəm vektoru

    // Vektorların ölçüləri eynidirsə, hər bir elementin cəmi tapılır
    if (vektor1.size() == vektor2.size()) 
    {
        for (size_t i = 0; i < vektor1.size(); ++i) 
        {
            cem.push_back(vektor1[i] + vektor2[i]);  // Hər iki vektorun uyğun elementlərini toplayırıq
        }
    } 

    else 
    {
        cout << "Vektorların uzunluqları fərqlidir!" << endl;  // Uzunluqları fərqli olduqda xəbərdarlıq
    }

    return cem;  // Nəticə vektorunu qaytarırıq
}


int main()
{
    // İki vektorun daxil edilməsi
    vector<int> vektor1 = {1, 2, 3};
    vector<int> vektor2 = {4, 5, 6};

    // Cəm vektorunu hesablamaq
    vector<int> cem = vektorCemi(vektor1, vektor2);

    // Nəticəni çap etmək
    cout << "Cəm: ";
    for (int eded : cem) 
    {
        cout << eded << " ";  // Cəm vektorunun bütün elementlərini çap edirik
    }
    cout << endl;

    return 0;
}
