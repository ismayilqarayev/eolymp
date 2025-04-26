#include <iostream>        // Konsola giriş/çıxış üçün
#include <vector>          // Vektor istifadəsi üçün
#include <unordered_map>   // Elementlərin təkrarlanma sayını saxlamaq üçün xəritə
using namespace std;

int main() {
    // Başlanğıc vektoru
    vector<int> vektor = {1, 2, 2, 3, 3, 3, 4};

    // Elementlərin təkrarlanma sayını saxlayan xəritə
    unordered_map<int, int> countMap;

    // Hər bir elementin təkrarlanma sayını hesablayırıq
    for (int eded : vektor) {
        countMap[eded]++;  // Elementin sayını artırırıq
    }

    // Ən çox təkrarlanan elementin tapılması
    int mostFrequent = vektor[0];     // Başlangıçda ilk element ən çox təkrarlanan kimi seçilir
    int maxCount = countMap[mostFrequent]; // İlk elementin sayını qeyd edirik

    // Xəritəni gəzərək ən çox təkrarlanan elementi tapırıq
    for (const auto& pair : countMap) {
        if (pair.second > maxCount) {    // Əgər daha çox təkrarlanan element tapılırsa
            mostFrequent = pair.first;  // Onu ən çox təkrarlanan element kimi təyin edirik
            maxCount = pair.second;     // Onun sayını yeniləyirik
        }
    }

    // Nəticəni ekrana çap edirik
    cout << "Ən çox təkrarlanan element: " << mostFrequent << endl;

    return 0;
}
