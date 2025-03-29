6. Orta qiymət tapmaq
1-dən n-ə qədər olan ədədlərin cəmini və orta qiymətini tapın.
Giriş: n = 5
Çıxış: Cəm: 15


#include <iostream>

int main() {
    int n;
    std::cout << "n daxil edin: ";
    std::cin >> n;

    int sum = n * (n + 1) / 2;
    double avg = (n + 1) / 2.0;

    std::cout << "Cəm: " << sum << std::endl;
    std::cout << "Orta qiymət: " << avg << std::endl;

    return 0;
}

