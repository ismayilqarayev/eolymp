1. Birinci n ədədin cəmi
n-ə qədər olan bütün ədədlərin cəmini tapın.
Giriş: n = 5
Çıxış: Cəm: 15

#include <iostream>

int main() {
    int n;
    std::cout << "n daxil edin: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << "Cəm: " << sum << std::endl;
    return 0;
}


//-------------------------------------------------

#include <iostream>

int main() {
    int n;
    std::cout << "n daxil edin: ";
    std::cin >> n;

    int sum = n * (n + 1) / 2;

    std::cout << "Cəm: " << sum << std::endl;
    return 0;
}
