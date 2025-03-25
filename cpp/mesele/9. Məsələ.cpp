9. Məsələ:
Şərt: Bir tam ədəd 𝑝 verilmişdir. Əgər 𝑝 müsbət və cüt ədəd olarsa, ekrana “Müsbət
cüt ədəd” yazdırın. Əgər 𝑝 müsbət və tək ədəd olarsa, ekrana “Müsbət tək ədəd”
yazdırın. Əgər 𝑝 mənfi ədəd olarsa, ekrana “Mənfi ədəd” yazdırın.
Giriş: 𝑝 = 6
Çıxış: “Müsbət cüt ədəd”

#include <iostream>
using namespace std;

int main() {
    int p;
    
    // İstifadəçidən ədədin daxil edilməsi
    cout << "Bir tam ədəd daxil edin: ";
    cin >> p;

    // Şərtləri yoxlayaq
    if (p > 0) {
        if (p % 2 == 0) {
            cout << "Müsbət cüt ədəd" << endl;
        } else {
            cout << "Müsbət tək ədəd" << endl;
        }
    } else {
        cout << "Mənfi ədəd" << endl;
    }

    return 0;
}
