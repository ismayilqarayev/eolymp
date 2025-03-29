5. Faktorial hesablamaq
Verilən n ədədinin faktorialını hesablayın.
Giriş: n = 5
Çıxış: Faktorial: 120

#include <iostream>

int main() {
    int n;
    std::cout << "n daxil edin: ";
    std::cin >> n;

    long long factorial = 1;
    for (int i = 2; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "Faktorial: " << factorial << std::endl;
    return 0;
}
