5. Massivdə minimum və maksimum elementi tapmaq
Təsvir: Verilən massivdə ən böyük və ən kiçik elementləri tapın.
Giriş:
n = 5
Massiv: 7 2 9 3 6
Çıxış:
Ən kiçik ədəd: 2
Ən böyük ədəd: 9


#include <iostream> // Giriş və çıxış üçün
using namespace std;

int main() {
    int n; // Massivin ölçüsü

    // İstifadəçidən massiv ölçüsünü alırıq
    cout << "n = ";
    cin >> n;

    int arr[n]; // n ölçülü massiv

    // Massivin elementlərini daxil edirik
    cout << "Massiv: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Ən kiçik və ən böyük ədədi ilk element kimi götürürük
    int min = arr[0];
    int max = arr[0];

    // Massivi dövr edərək ən kiçik və ən böyük ədədi tapırıq
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Yeni minimum tapıldısa yenilə
        }
        if (arr[i] > max) {
            max = arr[i]; // Yeni maksimum tapıldısa yenilə
        }
    }

    // Nəticələri ekrana yazdırırıq
    cout << "Ən kiçik ədəd: " << min << endl;
    cout << "Ən böyük ədəd: " << max << endl;

    return 0;
}
