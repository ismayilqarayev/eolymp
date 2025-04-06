10. Massivdə yalnız müsbət ədədləri çap etmək
Təsvir: Verilən massivdə yalnız müsbət ədədləri çap edin.

Giriş:
n = 5
Massiv: -3 5 -7 9 2

Çıxış:
Müsbət ədədlər: 5 9 2


#include <iostream> // Standart giriş-çıxış üçün kitabxana
using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n; // Massivin ölçüsünü alırıq

    int arr[n]; // Massivimizi elan edirik

    cout << "Massiv: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Massivin elementlərini daxil edirik
    }

    cout << "Müsbət ədədlər: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) { // Əgər element müsbətdirsə
            cout << arr[i] << " "; // Müsbət elementi çap edirik
        }
    }

    cout << endl; // Növbəti sətir üçün boşluq
    return 0;
}
