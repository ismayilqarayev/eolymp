9. Massivin bütün elementlərini kvadrata yüksəltmək
Təsvir: Verilən massivdəki hər bir ədədi kvadrata yüksəldib yeni massiv kimi çap edin.

Giriş:
n = 4
Massiv: 1 2 3 4

Çıxış:
Kvadratlar: 1 4 9 16


#include <iostream> // Standart giriş-çıxış üçün kitabxana
using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    int arr[n]; // Massiv elan edilir

    cout << "Massiv: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Massiv elementləri daxil edilir
    }

    cout << "Kvadratlar: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] * arr[i] << " "; // Hər bir ədədin kvadratı hesablanıb çap edilir
    }

    cout << endl;
    return 0;
}
