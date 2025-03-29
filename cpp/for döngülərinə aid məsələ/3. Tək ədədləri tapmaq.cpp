3. Tək ədədləri tapmaq
1-dən n-ə qədər olan tək ədədləri tapın.
Giriş: n = 10
Çıxış: 1

#include <iostream>

int main() {
    int n;
    std::cout << "n daxil edin: ";
    std::cin >> n;

    for (int i = 1; i <= n; i += 2) { // Tək ədədlər: 1, 3, 5, ...
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
