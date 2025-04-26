/*
15. Vektorda ən çox təkrarlanan elementi tapın.
Giriş: {1, 2, 2, 3, 3, 3, 4}
Çıxış: 3
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    // Başlangıç vektoru
    vector<int> vektor = {1, 2, 2, 3, 3, 3, 4};

    // Elementlərin təkrarlanma sayını saxlayan xəritə
    unordered_map<int, int> countMap;

    // Hər bir elementin təkrarlanma sayını hesablayırıq
    for (int eded : vektor) {
        countMap[eded]++;
    }

    // Ən çox təkrarlanan elementin tapılması
    int mostFrequent = vektor[0];
    int maxCount = countMap[mostFrequent];

    for (const auto& pair : countMap) {
        if (pair.second > maxCount) {
            mostFrequent = pair.first;
            maxCount = pair.second;
        }
    }

    // Nəticəni ekrana çap edirik
    cout << "Ən çox təkrarlanan element: " << mostFrequent << endl;

    return 0;
}
