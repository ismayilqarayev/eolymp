1. Massivin elementlərini çap etmək
Təsvir: İstifadəçi n ölçülü bir massiv daxil edir. Proqram həmin massivdəki bütün elementləri ekrana yazdırmalıdır.

Giriş:
n = 5
Massiv: 2 4 6 8 10

Çıxış:
2 4 6 8 10

#include <iostream>
using namespace std;

int main() 
{
    int n;
    
    // Massivin ölçüsünü daxil et
    cout << "Massivin ölçüsünü daxil edin: ";
    cin >> n;
    
    int arr[n];
    
    // Massivin elementlərini daxil et
    cout << "Massivin elementlərini daxil edin:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    
    // Massivin elementlərini çap et
    cout << "Massivin elementləri: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

