/*
28. Verilmiş vektorun ikinci ən böyük elementini tapın.
Giriş: {1, 5, 3, 9, 7}
Çıxış: 7
*/

/*
max1 — ən böyük ədədi saxlayır.
max2 — ikinci ən böyük ədədi saxlayır.
Dövr zamanı:
Əgər v[i] hazırkı ən böyükdən böyükdürsə, max2 olur köhnə max1, max1 isə yenilənir.
Əks halda, v[i] hazırkı max2-dən böyük və max1-dən kiçikdirsə, max2 yenilənir.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 5, 3, 9, 7};
    int max1 = INT_MIN; // Ən böyük ədəd
    int max2 = INT_MIN; // İkinci ən böyük ədəd

    for (int i = 0; i < v.size(); i++) 
    {
        if (v[i] > max1) 
        {
            max2 = max1; // Əvvəlki ən böyüyü ikinci ən böyüyə verirəm
            max1 = v[i]; // Yeni ən böyükü tapıram
        }

        else if (v[i] > max2 && v[i] < max1) 
        {
            max2 = v[i]; // max1-dən kiçik, amma max2-dən böyükdürsə yeniləyirəm
        }
    }

    cout << max2; // Nəticəni çap edirəm

    return 0;
}
