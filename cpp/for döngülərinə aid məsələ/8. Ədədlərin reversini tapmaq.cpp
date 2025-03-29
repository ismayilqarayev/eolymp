8. Ədədlərin reversini tapmaq
n-ə qədər olan ədədlərin reversini tapın.
Giriş: n = 5
Çıxış: 5


#include <iostream>

int main() {
    int n;
    std::cout << "n daxil edin: ";  // İstifadəçidən n ədədini daxil etməsini istəyirik
    std::cin >> n;

    // 1-dən n-ə qədər olan ədədləri dövr ilə yoxlayırıq
    for (int i = 1; i <= n; ++i) {
        int num = i;  // cari ədəd
        int reverse = 0;  // reversi saxlamaq üçün dəyişən

        // Ədədin tərsini tapmaq üçün dövr
        while (num > 0) {
            reverse = reverse * 10 + num % 10;  // sonuncu rəqəmi alır və reverse-a əlavə edirik
            num /= 10;  // sonuncu rəqəmi ədədin sonundan çıxarırıq
        }

        // Tərs ədədi ekrana yazdırırıq
        std::cout << "Reversi: " << reverse << std::endl;
    }

    return 0;
}

