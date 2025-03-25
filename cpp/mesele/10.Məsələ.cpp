10.Məsələ:
Şərt: Bir tam ədəd 𝑛 verilmişdir. Əgər 𝑛 10-a tam bölünürsə, ekrana “10-a bölünür”
yazdırın, əks halda “10-a bölünmür” yazdırın. Əgər 𝑛 sıfırdırsa, ekrana “Sıfır”
yazdırın.
Giriş: 𝑛 = 20
Çıxış: “10-a bölünür”

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // İstifadəçidən ədədin daxil edilməsi
    cout << "Bir tam ədəd daxil edin: ";
    cin >> n;

    // Şərtləri yoxlayaq
    if (n == 0) {
        cout << "Sıfır" << endl;
    } else if (n % 10 == 0) {
        cout << "10-a bölünür" << endl;
    } else {
        cout << "10-a bölünmür" << endl;
    }

    return 0;
}
