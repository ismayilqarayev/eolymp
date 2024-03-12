#include <iostream>

int main() {
    // Giriş ədədini daxil et
    long long n;
    std::cout << "Beşrəqəmli ədədi daxil edin: ";
    std::cin >> n;

    // Giriş ədədini yeddiqatlı sayıları ilə işləmək üçün ayır
    long long temp = n;

    // Faktor, hər bir rəqəmi dəyişdirmək üçün 10-un mərtəbəsi kimi istifadə edilir
    long long faktor = 1;

    // Cüt rəqəmləri artırmaq üçün ədədi əldə et
    while (temp > 0) {
        // Hər bir rəqəmi əldə et
        int reqem = temp % 10;

        // Cüt rəqəmsə, onu artır
        if (reqem % 2 == 0) {
            n += faktor;
        }

        // Faktoru mərtəbəsinə sal
        faktor *= 10;

        // Sonrakı rəqəmi əldə etmək üçün ədədi 10-a böl
        temp /= 10;
    }

    // Nəticəni çapa ver
    std::cout << "Dəyişdirilmiş ədəd: " << n << std::endl;

    return 0;
}
