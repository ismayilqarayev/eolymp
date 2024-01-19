//------------------------------------------------------
//------------------------------------------------------
//------------------------------------------------------

/*

Azercell Cup turniri ilə bağlı konkret məsələlər nəzərdə tutulsa da, 
geniş və müxtəlif bir şəkilə məsələlər təmin edə bilərəm. Hər hansı bir konkret 
tapşırığınız varsa, onu əlavə edərək konkret bir cavab almağınızı təmin edə bilərəm. 
Aşağıda geniş bir məsələ aralığı üçün nümunələr verilmişdir:

Məsələ 1: Ardıcıllığın Cəmi
İstifadəçidən ardıcıllığın uzunluğunu (n) və ardıcıllığın özünü daxil 
etməsini tələb edən bir proqram yazın. Proqram ardıcıllığın cəmini
 hesablayıb çap etməlidir.
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Ardıcıllığın uzunluğunu daxil edin: ";
    std::cin >> n;

    int cem = 0;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Ardıcıllığın " << i + 1 << "-ci ədədini daxil edin: ";
        std::cin >> num;

        cem += num;
    }

    std::cout << "Ardıcıllığın cəmi: " << cem << std::endl;

    return 0;
}

/*
Məsələ 2: Maksimum və Minimum Tapmaq
İstifadəçidən ardıcıllığın uzunluğunu (n) və ardıcıllığın ədədlərini 
daxil etməsini tələb edən bir proqram yazın. 
Proqram ardıcıllığın maksimum və minimum ədədlərini 
tapmalı və çap etməlidir.
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Ardıcıllığın uzunluğunu daxil edin: ";
    std::cin >> n;

    int max_num, min_num, current_num;

    for (int i = 0; i < n; ++i) {
        std::cout << "Ardıcıllığın " << i + 1 << "-ci ədədini daxil edin: ";
        std::cin >> current_num;

        if (i == 0 || current_num > max_num) {
            max_num = current_num;
        }

        if (i == 0 || current_num < min_num) {
            min_num = current_num;
        }
    }

    std::cout << "Ardıcıllığın maksimum ədədi: " << max_num << std::endl;
    std::cout << "Ardıcıllığın minimum ədədi: " << min_num << std::endl;

    return 0;
}

/*
Bu məsələlər, Azercell Cup turniri ilə əlaqəli konkret məsələlər olmadığı halda, 
C++ proqramlaşdırma dilində tipik məsələlərə bir baxış təqdim etmək üçündür. 
Eyni zamanda, turnirin rəsmi veb saytı və ya təşkilatçıları tərəfindən təqdim 
edilən məsələlərə baxmağı və ya əlavə məlumat əldə etməyi tövsiyə edirəm.
*/
