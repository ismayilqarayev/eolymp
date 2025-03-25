6. Məsələ:
Şərt: Bir tam ədəd 𝑛 verilmişdir. Əgər 𝑛 10 ilə 20 arasında bir ədəd olarsa, ekrana
“Ədəd 10 ilə 20 arasındadır” yazdırın. Əgər 𝑛 20-dən kiçikdirsə, ekrana “Ədəd 20-
dən kiçikdir” yazdırın. Əgər 𝑛 10-dan böyükdürsə, ekrana “Ədəd 10-dan böyükdür”
yazdırın.
Giriş: 𝑛 = 15
Çıxış: “Ədəd 10 ilə 20 arasındadır”


#include <iostream>
using namespace std;

int main() {
    int n;
    
    // İstifadəçidən ədədin daxil edilməsi
    cout << "Bir tam ədəd daxil edin: ";
    cin >> n;

    // Şərtləri yoxlayaq
    if (n >= 10 && n <= 20) {
        cout << "Ədəd 10 ilə 20 arasındadır" << endl;
    } else if (n < 10) {
        cout << "Ədəd 20-dən kiçikdir" << endl;
    } else {
        cout << "Ədəd 10-dan böyükdür" << endl;
    }

    return 0;
}
