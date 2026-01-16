//10. Verilən ədədin bölənlərini tapmaq
//Verilən n ədədinin bütün bölənlərini tapın.

//Giriş: n = 12
//Çıxış: 1

#include <iostream>
#include <cmath>  // sqrt() funksiyası üçün daxil edilir. Bu funksiyadan √n tapmaq üçün istifadə edəcəyik.

int main() {
    int n;
    std::cout << "n daxil edin: ";  // İstifadəçidən `n` ədədini daxil etməsini istəyirik
    std::cin >> n;  // İstifadəçi tərəfindən daxil edilən `n` ədədini oxuyuruq

    std::cout << "Bölənlər: ";  // Ekrana "Bölənlər: " yazdırırıq

    // 1-dən n-ə qədər olan ədədləri dövr ilə yoxlayırıq.
    for (int i = 1; i <= n; ++i) {
        // Əgər n ədədini `i` ilə bölsək, qalıq sıfır olarsa, deməli `i` ədədinin `n`-in böləni olduğunu müəyyən etmiş oluruq.
        if (n % i == 0) {  
            std::cout << i << " ";  // Əgər `i` bölən olduğu halda, `i`-ni ekrana yazdırırıq
        }
    }

    std::cout << std::endl;  // Nəticənin sonunda bir sətir dəyişməsi (newline) əlavə edirik
    return 0;  // Proqramın uğurla tamamlandığını bildiririk
}
