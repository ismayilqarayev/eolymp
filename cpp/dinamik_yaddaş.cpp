/*
Dinamik yaddaş və smart-göstəricilər
Dinamik obyektlər
C++ dilində müxtəlif növ obyektlərdən istifadə etmək mümkündür və onlar yaddaşın istifadə olunma üsuluna görə fərqlənirlər.
Qlobal obyektlər proqram işə düşdükdə yaradılır və proqram bitdikdə yaddaşdan silinir.
Lokal avtomatik obyektlər kod blokunun daxilində yaradılır və həmin blok işini bitirdikdə avtomatik silinir.
Lokal statik obyektlər isə ilk istifadə olunmadan əvvəl yaradılır və proqram bitdikdə yaddaşdan silinir.
-----
Qlobal obyektlər və statik lokal obyektlər statik yaddaşda, lokal avtomatik obyektlər isə stack-da saxlanılır. Statik yaddaşda və stackda yerləşən obyektlər kompilyator tərəfindən yaradılır və silinir.

Statik yaddaş proqramın işi bitdikdə tamamilə təmizlənir. Stackda yerləşən obyektlər isə yalnız onların daxil olduğu blok işlədiyi müddətdə mövcud olur. Blokun icrası başa çatan kimi həmin blok üçün stackda ayrılmış yaddaş avtomatik olaraq boşaldılır.

Həmçinin nəzərə almaq lazımdır ki, stack üçün ayrılan yaddaşın 
həcmi məhduddur və dəyişmir.

Bunlara əlavə olaraq, C++ dilində dinamik obyektlər yaratmaq da mümkündür.
Onların ömrü yaradıldıqları yerə bağlı deyil. Dinamik obyektlər yalnız açıq şəkildə silindiyi zaman yox olur.
Dinamik obyektlər dinamik yaddaşda (free store) yerləşdirilir. Bu yaddaş sahəsi əməliyyat sistemi və ya digər həmin anda işləyən proqramlar tərəfindən tutulmamış olur.
---
Dinamik obyektlərdən istifadə bir sıra üstünlüklərə malikdir.
Birincisi, yaddaşın daha səmərəli istifadəsidir – yalnız lazım olan qədər yaddaş ayrılır və obyekt istifadə olunduqdan sonra dərhal azad edilir.
İkincisi, biz çox daha böyük yaddaş sahəsini istifadə edə bilərik ki, bu, əks halda əlçatan olmazdı.
Lakin bu yanaşmanın məhdudiyyətləri də var: bütün dinamik obyektlərin mütləq şəkildə silinməsinə diqqət yetirmək lazımdır.
Dinamik obyektləri idarə etmək üçün C++ dilində new və delete operatorları istifadə olunur.
new operatoru dinamik yaddaşdan obyekt üçün yer ayırır və həmin obyektə göstərici (pointer) qaytarır.
delete operatoru isə göstərilən dinamik obyektin yaddaşını azad edir.
Beləliklə, dinamik yaddaşın ayrılması və azad edilməsi new və delete operatorları ilə həyata keçirilir.
*/

#include <iostream>
using namespace std;

// Funksiya dinamik obyekt yaradır və dəyər qaytarır
void funksiya() {
    // Dinamik yaddaşda int obyekt yaradılır
    int* ptr = new int;  
    *ptr = 42;  // obyektə dəyər verilir

    cout << "Dinamik obyektin dəyəri: " << *ptr << endl;

    // İş bitdikdə yaddaş azad edilir
    delete ptr;
    ptr = nullptr; // göstərici təhlükəsiz vəziyyətə gətirilir
}

int main() {
    funksiya(); // funksiyanı çağırırıq
    return 0;
}
/*
İzah:
new int ilə dinamik yaddaşda int obyekt yaradılır.
*ptr = 42; ilə obyektə dəyər verilir.
cout ilə dəyəri ekrana çıxarılır.
delete ptr; ilə yaddaş azad edilir, ptr = nullptr; ilə göstərici təhlükəsiz hala gətirilir.
*/