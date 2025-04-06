1. Massivin elementlərini çap etmək
Təsvir: İstifadəçi n ölçülü bir massiv daxil edir. Proqram həmin massivdəki bütün elementləri ekrana yazdırmalıdır.
Giriş:
n = 5
Massiv: 2 4 6 8 10
Çıxış:
2 4 6 8 10


#include <iostream> // Standart giriş-çıxış kitabxanasını əlavə edirik
using namespace std; // std ad məkanından istifadə edirik

int main() {
    int n; // Massivin ölçüsünü saxlayacaq dəyişən

    // İstifadəçidən massiv ölçüsünü alırıq
    cout << "n = ";
    cin >> n;

    int arr[n]; // n ölçülü massiv elan edirik

    // Massivin elementlərini istifadəçidən alırıq
    cout << "Massiv: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Hər elementi massivə daxil edirik
    }

    // Massivin daxil edilmiş elementlərini ekrana çap edirik
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Hər elementi boşluqla ayıraraq çap edirik
    }

    return 0; // Proqramı uğurla bitiririk
}
