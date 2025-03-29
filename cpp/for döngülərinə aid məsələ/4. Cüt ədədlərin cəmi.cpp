4. Cüt ədədlərin cəmi
1-dən n-ə qədər olan cüt ədədlərin cəmini tapın.
Giriş: n = 10
Çıxış: Cəm: 30

#include <iostream>

int main() {
    int n;
    std::cout << "n daxil edin: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 2; i <= n; i += 2) { // Cüt ədədlər: 2, 4, 6, ...
        sum += i;
    }

    std::cout << "Cəm: " << sum << std::endl;
    return 0;
}
