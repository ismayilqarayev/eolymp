7. Məsələ:
Şərt: Bir tam ədəd 𝑎 verilmişdir. Əgər 𝑎 müsbət ədəd olarsa, ekrana “Müsbət ədəd”
yazdırın, əks halda “Müsbət deyil” yazdırın. Əgər 𝑎 sıfırdırsa, ekrana “Sıfır” yazdırın.
Giriş: 𝑎 = −5
Çıxış: “Müsbət deyil”

#include <iostream>
using namespace std;

int main() {
    int a;
    
    // İstifadəçidən ədədin daxil edilməsi
    cout << "Bir tam ədəd daxil edin: ";
    cin >> a;

    // Şərtləri yoxlayaq
    if (a > 0) {
        cout << "Müsbət ədəd" << endl;
    } else if (a == 0) {
        cout << "Sıfır" << endl;
    } else {
        cout << "Müsbət deyil" << endl;
    }

    return 0;
}
