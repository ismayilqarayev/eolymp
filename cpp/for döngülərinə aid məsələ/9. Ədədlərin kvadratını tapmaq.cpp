9. Ədədlərin kvadratını tapmaq
1-dən n-ə qədər olan ədədlərin kvadratını tapın.
Giriş: n = 5
Çıxış: 1

#include <iostream>

int main() {
    int n;
    std::cout << "n daxil edin: ";  // İstifadəçidən n ədədini daxil etməsini istəyirik
    std::cin >> n;

    // 1-dən n-ə qədər olan ədədlərin kvadratını tapırıq
    for (int i = 1; i <= n; ++i) {
        int square = i * i;  // ədədin kvadratını tapırıq
        std::cout << i << " kvadratı: " << square << std::endl;  // kvadratı ekrana yazdırırıq
    }

    return 0;
}


