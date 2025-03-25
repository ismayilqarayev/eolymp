4. Məsələ:
Şərt: Bir tam ədəd 𝑥 verilmişdir. Əgər 𝑥 cüt ədəd olarsa, ekrana “Cüt ədəd” yazdırın,
əks halda “Tək ədəd” yazdırın.
Giriş: 𝑥 = 8
Çıxış: “Cüt ədəd”

#include <iostream>
using namespace std;

int main() {
    int x;
    
    // İstifadəçidən ədədin daxil edilməsi
    cout << "Bir tam ədəd daxil edin: ";
    cin >> x;

    // Şərti yoxlayaq (cüt və ya tək ədəd)
    if (x % 2 == 0) {
        cout << "Cüt ədəd" << endl;
    } else {
        cout << "Tək ədəd" << endl;
    }

    return 0;
}

