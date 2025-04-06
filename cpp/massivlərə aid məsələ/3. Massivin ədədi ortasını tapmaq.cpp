3. Massivin ədədi ortasını tapmaq
Təsvir: Verilən massivdəki elementlərin cəmini və onların orta qiymətini hesablayın.
Giriş:
n = 3
Massiv: 10 20 30
Çıxış:
Orta qiymət: 20


#include <iostream> // Giriş və çıxış funksiyaları üçün
using namespace std;

int main() {
    int n; // Massivin ölçüsünü saxlayacaq dəyişən

    // İstifadəçidən massiv ölçüsünü alırıq
    cout << "n = ";
    cin >> n;

    int arr[n];     // n ölçülü massiv
    int sum = 0;    // Cəmi saxlamaq üçün dəyişən

    // Massiv elementlərini daxil edirik və cəmini hesablayırıq
    cout << "Massiv: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];     // Hər bir elementi daxil edirik
        sum += arr[i];     // Həmin elementi cəmin üstünə əlavə edirik
    }

    // Orta qiyməti hesablayırıq (cəmi element sayına bölürük)
    int orta = sum / n;

    // Nəticəni çap edirik
    cout << "Orta qiymət: " << orta << endl;

    return 0;
}
