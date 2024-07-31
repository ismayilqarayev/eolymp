#include <iostream>
#include <cmath>

int main() {
    double ildiz, eded, netice;

    // İstifadəçidən ədədi və ildizi daxil etmək
    std::cout << "Ədədi daxil edin: ";
    std::cin >> eded;

    std::cout << "Ədədin qüvvəti (ildizi) daxil edin: ";
    std::cin >> ildiz;

    // pow() funksiyası ilə ədədin ildizi hesablanır
    netice = pow(eded, ildiz);

    // Nəticəni çap etmək
    std::cout << eded << " ^ " << ildiz << " = " << netice << std::endl;

    return 0;
}




