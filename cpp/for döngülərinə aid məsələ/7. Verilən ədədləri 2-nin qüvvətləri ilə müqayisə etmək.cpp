7. Verilən ədədləri 2-nin qüvvətləri ilə müqayisə etmək
1-dən n-ə qədər olan ədədləri ekrana yazdırın və hər bir ədədin 2-nin qüvvəti olubolmadığını yoxlayın.
Giriş: n = 10
Çıxış: 1 - 2-nin qüvvətidir

#include <iostream>

int main() {
    int n;
    std::cout << "n daxil edin: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        std::cout << i;
        if ((i & (i - 1)) == 0) {
            std::cout << " - 2-nin qüvvətidir";
        }
        std::cout << std::endl;
    }

    return 0;
}
