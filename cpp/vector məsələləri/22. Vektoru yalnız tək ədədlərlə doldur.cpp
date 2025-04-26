/*
22. Vektoru yalnız tək ədədlərlə doldur.
Giriş: n = 5
Çıxış: {1, 3, 5, 7, 9}
*/

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n; // Neçə ədəd tək ədəd istənildiyini daxil edirik
    cin >> n;

    vector<int> v; // Boş vektor yaradırıq

    int num = 1; // Tək ədədlər 1-dən başlayır
    for (int i = 0; i < n; i++) 
    {
        v.push_back(num); // Vektora tək ədədi əlavə edirik
        num += 2;         // Sonrakı tək ədədə keçirik
    }

    // Nəticəni çap edirik
    for (int x : v) 
    {
        cout << x << " ";
    }

    return 0;
}
