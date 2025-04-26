/*
21. Verilmiş vektoru dairəvi şəkildə sağa sürüşdürün (rotate).
Giriş: {1, 2, 3, 4}, k = 2
Çıxış: {3, 4, 1, 2}
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> v = {1, 2, 3, 4};
    int k = 2;
    int n = v.size();

    // k dəfə sağa sürüşdürmək
    for (int i = 0; i < k; i++) 
    {
        int son = v[n - 1]; // Sonuncu elementi yadda saxlayırıq
        for (int j = n - 1; j > 0; j--) 
        {
            v[j] = v[j - 1]; // Elementləri bir sağa sürüşdürürük
        }
        v[0] = son; // Əvvələ son elementi qoyuruq
    }

    // Çıxış
    for (int num : v) 
    {
        cout << num << " ";
    }

    return 0;
}
