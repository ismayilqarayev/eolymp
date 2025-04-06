2. Massivin cəmini tapmaq
Təsvir: Verilən massivdəki bütün elementlərin cəmini hesablayın.
Giriş:
n = 4
Massiv: 1 3 5 7
Çıxış:
Cəm: 16


#include <iostream> // Giriş və çıxış əməliyyatları üçün kitabxana
using namespace std; // Standart ad məkanından istifadə

int main() {
    int n; // Massivin ölçüsünü saxlayacaq dəyişən

    // İstifadəçidən n ədədini alırıq
    cout << "n = ";
    cin >> n;

    int arr[n]; // n ölçülü massiv elan edirik
    int sum = 0; // Cəmi hesablamaq üçün dəyişən (başlanğıcda 0)

    // Massivin elementlərini daxil edirik
    cout << "Massiv: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];      // Elementi daxil edirik
        sum += arr[i];      // Hər daxil edilən ədədi cəmin üzərinə əlavə edirik
    }

    // Cəmi ekrana çap edirik
    cout << "Cəm: " << sum << endl;

    return 0; // Proqramı uğurla bitiririk
}
