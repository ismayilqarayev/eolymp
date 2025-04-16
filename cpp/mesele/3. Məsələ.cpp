3. Məsələ:
Şərt: İki tam ədəd 𝑎 və 𝑏 verilmişdir. Əgər 𝑎 bədən böyükdürsə, ekrana “a
böyükdür” yazdırın. Əgər 𝑏 a-dan böyükdürsə, ekrana “b böyükdür” yazdırın. Əgər 𝑎
və 𝑏 bərabərdirsə, ekrana “Hər ikisi bərabərdir” yazdırın.
Giriş: 𝑎 = 7, 𝑏 = 3
Çıxış: “a böyükdür”

#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // İstifadəçidən ədədlərin daxil edilməsi
    cout << "İki tam ədəd daxil edin: ";
    cin >> a >> b;

    // Şərtləri yoxlayaq
    if (a > b) 
    {
        cout << "a böyükdür" << endl;
    }
     
    else if (b > a) 
    {
        cout << "b böyükdür" << endl;
    }

    else 
    {
        cout << "Hər ikisi bərabərdir" << endl;
    }

    return 0;
}
