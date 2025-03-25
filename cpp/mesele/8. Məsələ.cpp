8. Məsələ:
Şərt: Bir tam ədəd 𝑚 verilmişdir. Əgər 𝑚 5-in tam bölənidirsə, ekrana “5-in böləni”
yazdırın. Əgər 𝑚 5-ə bölünmürsə, ekrana “5-ə bölünmür” yazdırın.
Giriş: 𝑚 = 10
Çıxış: “5-in böləni”

#include <iostream>
using namespace std;

int main() {
    int m;
    
    // İstifadəçidən ədədin daxil edilməsi
    cout << "Bir tam ədəd daxil edin: ";
    cin >> m;

    // Şərti yoxlayaq (5-ə bölünüb-bölünmədiyini)
    if (m % 5 == 0) {
        cout << "5-in böləni" << endl;
    } else {
        cout << "5-ə bölünmür" << endl;
    }

    return 0;
