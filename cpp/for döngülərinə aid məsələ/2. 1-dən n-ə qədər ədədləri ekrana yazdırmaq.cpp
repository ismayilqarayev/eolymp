2. 1-dən n-ə qədər ədədləri ekrana yazdırmaq
1-dən n-ə qədər olan bütün ədədləri ekrana yazdırın.
Giriş: n = 5
Çıxış: 1

#include <iostream>

int main() {
    int n;
    std::cout << "n daxil edin: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
