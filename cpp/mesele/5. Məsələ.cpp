5. Məsələ:
Şərt: Bir tam ədəd 𝑦 verilmişdir. Əgər 𝑦 tək ədəd olarsa, ekrana “Tək ədəd” yazdırın.
Əgər 𝑦 cüt ədəd olarsa, ekrana “Cüt ədəd” yazdırın.
Giriş: 𝑦 = 9
Çıxış: “Tək ədəd”

#include <iostream>
using namespace std;

int main() {
    int y;
    
    // İstifadəçidən ədədin daxil edilməsi
    cout << "Bir tam ədəd daxil edin: ";
    cin >> y;

    // Şərti yoxlayaq (tək və ya cüt ədəd)
    if (y % 2 != 0) {
        cout << "Tək ədəd" << endl;
    } else {
        cout << "Cüt ədəd" << endl;
    }

    return 0;
}
