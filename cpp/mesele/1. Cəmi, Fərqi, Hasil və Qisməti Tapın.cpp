1. Cəmi, Fərqi, Hasil və Qisməti Tapın
Məsələ: İstifadəçidən iki tam ədəd daxil etməsini istəyən və bu ədədlərin cəmini, fərqini,
hasilini və qismətini hesablayan proqram yazın.
Giriş: İki tam ədəd daxil edilir. Məsələn: 10,5
Çıxış:
Giriş: 10 5
Cəm: 15
Fərq: 5
Hasil: 50
Qismət: 2

// 1. Cəmi, Fərqi, Hasil və Qisməti Tapın
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "İki tam ədəd daxil edin: ";
    cin >> a >> b;

    cout << "Cəm: " << a + b << endl;
    cout << "Fərq: " << a - b << endl;
    cout << "Hasil: " << a * b << endl;

    if (b != 0)
        cout << "Qismət: " << a / b << endl;
    else
        cout << "Sıfıra bölmək mümkün deyil!" << endl;

    return 0;
}
