1. Məsələ:
Şərt: Bir tam ədəd 𝑛 verilmişdir. Əgər 𝑛 müsbət ədəd olarsa, ekrana “Müsbət ədəd”
yazdırın. Əgər 𝑛 sıfırdırsa, ekrana “Sıfır” yazdırın. Əgər 𝑛 mənfi ədəd olarsa, ekrana
“Mənfi ədəd” yazdırın.
Giriş: 𝑛 = 5
Çıxış: “Müsbət ədəd”

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // İstifadəçidən ədədin daxil edilməsi
    cout << "Bir tam ədəd daxil edin: ";
    cin >> n;

    // Şərtləri yoxlayaq
    if (n > 0) {
        cout << "Müsbət ədəd" << endl;
    } else if (n == 0) {
        cout << "Sıfır" << endl;
    } else {
        cout << "Mənfi ədəd" << endl;
    }

    return 0;
}
