8. Massivdə təkrarlanan elementləri tapmaq
Təsvir: Verilən massivdə təkrarlanan ədədləri çap edin.

Giriş:
n = 6
Massiv: 2 4 6 2 8 4

Çıxış:
Təkrarlanan ədədlər: 2 4


#include <iostream>      // Standart giriş-çıxış
#include <unordered_set> // Unikal elementləri saxlamaq üçün
using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    int arr[n];
    cout << "Massiv: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> gorulen;      // Daha əvvəl görünən ədədlər
    unordered_set<int> tekrarlar;    // Təkrarlanan ədədlər

    for (int i = 0; i < n; i++) {
        // Əgər ədəd daha əvvəl görünmüşsə, təkrarlananlara əlavə et
        if (gorulen.find(arr[i]) != gorulen.end()) {
            tekrarlar.insert(arr[i]);
        } else {
            gorulen.insert(arr[i]); // İlk dəfə görürüksə, yadda saxla
        }
    }

    // Nəticəni çap edirik
    cout << "Təkrarlanan ədədlər: ";
    for (int eded : tekrarlar) {
        cout << eded << " ";
    }

    cout << endl;
    return 0;
}
