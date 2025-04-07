4. Massivdə cüt və tək ədədləri ayırmaq
Təsvir: Verilən massivdəki cüt və tək ədədləri ayrı-ayrı çap edin.

Giriş:
n = 6
Massiv: 1 2 3 4 5 6

Çıxış:
Cüt ədədlər: 2 4 6
Tək ədədlər: 1 3 5


#include <iostream> // Giriş-çıxış funksiyaları üçün
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
        cin >> arr[i]; // Hər bir elementi istifadəçidən alırıq
    }

    // Cüt ədədləri çap edirik
    cout << "Cüt ədədlər: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Əgər ədəd 2-yə tam bölünürsə, cütdür
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    // Tək ədədləri çap edirik
    cout << "Tək ədədlər: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) { // Əgər ədəd 2-yə tam bölünmürsə, təkdir
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0; // Proqramı bitiririk
}
