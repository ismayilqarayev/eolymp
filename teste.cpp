#include <iostream>

int main() {
    int k;

    // Giriş verilənlərini oxu
    std::cin >> k;

    int n = 1;

    // Sadə üsulları axtarış
    for (int i = 2; i <= k; ++i) {
        int count = 0;

        while (k % i == 0) {
            k /= i;
            count++;
        }

        // 2 üsulunu 2 dəfə qoş
        if (i == 2 && count == 1) {
            n *= i * i;
        }
        // Əgər 2 üsulu bir dəfədən çox qoşulsa, proqram çıxış versin
        else if (i == 2 && count > 1) {
            std::cout << n << std::endl;
            return 0;
        }
    }

    std::cout << n << std::endl;
}
