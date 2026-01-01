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

int main() 
{
    int *ptr{new int};
    int *ptr2 = new int;

    delete ptr;
    delete ptr2;

    return 0;
}

/*
new operatoru dinamik yaddaşda int tipi üçün yeni obyekt yaradır və ona göstərici (pointer) qaytarır.
Beləliklə, ptr göstəricisi ayrılmış yaddaşın ünvanını saxlayır.
Belə yaradılmış obyektin dəyəri isə əvvəlcədən müəyyən deyil (undefined).
*/

/*
Həmçinin obyektin yaradılması zamanı onu ilk dəyər
ilə də təhlükəsiz şəkildə inicializasiya etmək mümkündür.
*/

#include <iostream>
using namespace std;

int main() 
{
    // Dinamik yaddaşda int obyekt yaradılır və 0 ilə inicializasiya olunur
    int *ptr{new int()};    // dəyər defolt olaraq 0 olur
    // Alternativ yazılış:
    // int *ptr = new int();

    cout << *ptr << endl;   // ekrana 0 çıxacaq

    delete ptr;  // yaddaşı azad edirik
    ptr = nullptr;

    return 0;
}

//-------------------------------------------------------------------------------------------------------
/////--- 4 cü səyifə ---////

/*
Burada ptr göstəricisinin işarə etdiyi yaddaşdakı obyekt susmaya görə dəyər alır, yəni 0 olur.
İlkin dəyər vermək (inicializasiya etmək) üçün fiqurlu mötərizələrdən də istifadə etmək olar.
*/

#include <iostream>
using namespace std;

int main() 
{
    int *ptr{new int{}};    // susmaya görə dəyər — 0
    // int *ptr = new int{}; // yaxud bu cür də yazmaq olar
    cout << *ptr << endl;   // 0
}

/*
Həmçinin obyekti müəyyən konkret bir dəyər ilə də inicializasiya etmək olar, məsələn:
*/

#include <iostream>

int main()
{
    int *ptr{new int{5}};
    // alternativ variantlar
    // int *ptr = new int{5};
    // int *ptr{new int(5)};
    // int *ptr = new int(5);

    std::cout << *ptr << std::endl;     // 5

    delete ptr;
    return 0;
}

//Burada dinamik yaddaşda yaradılan obyektin dəyəri 5-ə bərabərdir.

//Daha sonra göstəricidən (pointerdən) istifadə edərək dinamik obyektə başqa bir dəyər mənimsətmək olar.

#include <iostream>

int main()
{
    int *ptr{new int{5}};
    std::cout << "*ptr = " << *ptr << std::endl;  // *ptr = 5

    *ptr = 22;
    std::cout << "*ptr = " << *ptr << std::endl;  // *ptr = 22

    delete ptr;
    return 0;
}
//-----------------------------------------------------------------------------------------------------------
//-- 5 ci səyifə --//

//Yaddaşın azad edilməsi

/*
Dinamik obyektlər yalnız açıq şəkildə silinənə qədər mövcud olurlar.
Dinamik obyektlərdən istifadə başa çatdıqdan sonra onların tutduğu
yaddaş delete operatoru vasitəsilə azad edilməlidir.
*/

#include <iostream>

int main()
{
    int *ptr{new int{5}};   // yaddaş ayırırıq
    std::cout << "*ptr = " << *ptr << std::endl;  // *ptr = 5
    delete ptr;             // yaddaşı azad edirik
}

/*
Xüsusilə nəzərə almaq lazımdır ki, 
dinamik obyekt kodun bir hissəsində yaradılıb, 
digər hissəsində istifadə oluna bilər. Məsələn:
*/

#include <iostream>

// Bu funksiya dinamik yaddaşda int tipli obyekt yaradır
// və onun ünvanını (göstəricini) geri qaytarır
int* createPtr(int value)
{
    // new operatoru ilə dinamik yaddaş ayrılır
    // value dəyişəni ilə obyekt ilkin qiymətləndirilir
    int *ptr {new int{value}};
    
    // Ayrılmış yaddaşın ünvanı qaytarılır
    return ptr;
}

// Bu funksiya createPtr funksiyasından qaytarılan
// dinamik obyektdən istifadə edir
void usePtr()
{
    // createPtr funksiyası çağırılır
    // və qaytarılan ünvan obj göstəricisinə mənimsədilir
    int *obj = createPtr(10);

    // Göstəricinin işarə etdiyi obyektin dəyəri ekrana çıxarılır
    std::cout << *obj << std::endl;  // 10

    // Dinamik obyektlə iş bitdikdən sonra
    // mütləq delete operatoru ilə yaddaş azad edilməlidir
    // Əks halda yaddaş sızması (memory leak) yaranar
    delete obj;
}

int main()
{
    // usePtr funksiyası çağırılır
    // burada dinamik yaddaş yaradılır, istifadə olunur
    // və sonda düzgün şəkildə azad edilir
    usePtr();
}

//-------------------------------------------------------------------------------------------------------------
// -- 6 cı seyife -- // 

/*
usePtr funksiyasında createPtr funksiyasından dinamik obyektə işarə edən göstəricini alırıq. 
Lakin usePtr funksiyasının icrası başa çatdıqdan sonra bu obyekt avtomatik olaraq yaddaşdan silinmir (lokal avtomatik obyektlərdə olduğu kimi). 
Buna görə də həmin obyekt üçün ayrılmış yaddaşı delete operatorundan istifadə edərək açıq şəkildə azad etmək lazımdır.
*/

/*
Açıq şəkildə `delete` operatoru çağırılmazsa, 
ayrılmış dinamik yaddaş yalnız proqramın icrası başa çatdıqdan sonra azad ediləcək.
*/

/*
Amma qeyd etmək lazımdır ki, yaddaş azad edildikdən sonra belə, 
göstərici hələ də əvvəlki ünvanı saxlayır. 
Lakin həmin yaddaş şərti olaraq azad edilib və gələcək dinamik obyektlər 
üçün istifadəyə hazırdır. Belə göstəriciyə «dalğalanan göstərici» (dangling pointer) 
deyilir. Biz hətta bu göstərici vasitəsilə yaddaşa müraciət etməyə cəhd edə bilərik. 
Lakin göstərici vasitəsilə obyektə baxmaq və ya həmin göstəriciyə 
yenidən delete operatorunu tətbiq etmək proqrama təxmin edilə bilməyən nəticələr verə bilər.
*/

