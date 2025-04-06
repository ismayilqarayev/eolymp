6. Massivin tərsini çap etmək
Təsvir: Massivin elementlərini tərs sırayla çap edin.
Giriş:
n = 4
Massiv: 1 2 3 4
Çıxış:
Tərs sıra: 4 3 2 1


#include <iostream> // Standart giriş-çıxış kitabxanası
using namespace std;

int main() {
    int n; // Massivin uzunluğu

    // İstifadəçidən n dəyərini alırıq
    cout << "n = ";
    cin >> n;

    int arr[n]; // n ölçülü massiv

    // Massivin elementlərini daxil edirik
    cout << "Massiv: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Tərs sıra ilə çap edirik (axırdan başlayaraq)
    cout << "Tərs sıra: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
