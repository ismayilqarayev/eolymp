7. Massivdə bir elementi axtarmaq
Təsvir: İstifadəçi n ölçülü massiv və x ədədini daxil edir. Proqram x ədədinin massivdə olub-olmadığını yoxlamalıdır.

Giriş:
n = 5
Massiv: 5 8 12 3 7
Axtarılan ədəd: 12

Çıxış:
12 massivin içindədir.


#include <iostream> // Giriş-çıxış üçün lazım olan kitabxana
using namespace std;

int main() {
    int n; // Massivin ölçüsü

    // Massivin ölçüsünü istifadəçidən alırıq
    cout << "n = ";
    cin >> n;

    int arr[n]; // n ölçülü massiv

    // Massivin elementlərini daxil edirik
    cout << "Massiv: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x; // Axtarılan ədəd
    cout << "Axtarılan ədəd: ";
    cin >> x;

    bool tapildi = false; // Əvvəlcə tapılmadığını qəbul edirik

    // Massivdə axtarılan ədədin olub olmadığını yoxlayırıq
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            tapildi = true;
            break; // Tapıldığı anda dövrü dayandır
        }
    }

    // Nəticəni çap edirik
    if (tapildi) {
        cout << x << " massivin içindədir." << endl;
    } else {
        cout << x << " massivin içində deyil." << endl;
    }

    return 0;
}
