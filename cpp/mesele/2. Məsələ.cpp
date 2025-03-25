2. Məsələ:
Şərt: Bir tam ədəd 𝑛 verilmişdir. Əgər 𝑛 sıfırdan kiçikdirsə, ekrana “Mənfi ədəd”
yazdırın. Əgər 𝑛 sıfırdan böyükdürsə, ekrana “Müsbət ədəd” yazdırın. Əgər 𝑛
sıfırdırsa, ekrana “Sıfır” yazdırın.
Giriş: 𝑛 = −3
Çıxış: “Mənfi ədəd”

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // İstifadəçidən ədədin daxil edilməsi
    cout << "Bir tam ədəd daxil edin: ";
    cin >> n;

    // Şərtləri yoxlayaq
    if (n < 0) {
        cout << "Mənfi ədəd" << endl;
    } else if (n > 0) {
        cout << "Müsbət ədəd" << endl;
    } else {
        cout << "Sıfır" << endl;
    }

    return 0;
}
