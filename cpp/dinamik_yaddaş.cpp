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


#include <iostream>
using namespace std;

void pointerExample()
{
    int *ptr {new int{12}};
    std::cout << *ptr << std::endl;  // 12
    delete ptr;
    
    // səhv ssenarilər
    std::cout << *ptr << std::endl;  // ptr göstəricisinin işarə etdiyi obyekt artıq silinib!
    delete ptr; // ptr göstəricisinin işarə etdiyi obyekt artıq silinib!
}

int main()
{
    pointerExample();
}

/*
Belə boşda qalan göstəricilər problem yaratmasın deyə, 
yaddaş silindikdən sonra həmin göstəricini boş (NULL) etmək məsləhətdir.
*/

#include <iostream>

void example()
{
    int* ptr = new int{12};          // yaddaşda yer ayırırıq
    std::cout << *ptr << std::endl;  // 12-ni ekrana çıxarırıq

    delete ptr;                      // yaddaşı azad edirik
    ptr = nullptr;                  // göstəricini sıfırlayırıq
}

int main()
{
    example();
    return 0;
}

/*
Əgər null (boş) göstərici ilə obyektə müraciət etsək, 
proqram xəta verib dayanır. Amma delete operatorunu null göstəriciyə yazsaq, heç nə baş vermir.

Bəzən eyni obyektə iki və ya daha çox göstərici işarə edir. 
Əgər bu göstəricilərdən biri ilə delete etsək, obyekt yaddaşdan silinir. 
Bundan sonra digər göstərici ilə həmin obyekti istifadə etmək olmaz. 
Əgər yenə delete yazsaq, bu artıq yaddaş xətasına səbəb ola bilər.

delete istifadə edildikdən sonra göstərici boş və ya yararsız olur. 
Amma bu o demək deyil ki, onu birdəfəlik atırıq. Göstəriciyə başqa obyektin ünvanını versək, 
onu yenidən rahat istifadə edə bilərik.
*/

#include <iostream>
 
int main()
{
    int *p1 {new int{12}};  
    // p1 dinamik yaddaşda yaradılmış 12 qiymətli dəyişəni göstərir

    int *p2 {p1};   
    // p2 də p1 kimi eyni obyektə işarə edir (hər ikisi eyni ünvanı saxlayır)
     
    std::cout << *p1 << std::endl;  
    // p1 vasitəsilə obyektin qiyməti çap olunur → 12

    std::cout << *p2 << std::endl;  
    // p2 də eyni obyektə baxdığı üçün → 12 çap olunur

    delete p1;      
    // obyektin tutduğu dinamik yaddaş azad edilir
    // bu andan etibarən həm p1, həm də p2 etibarsız ünvan saxlayır

    p1 = nullptr;  
    // p1 boş göstəriciyə çevrilir (təhlükəsizlik üçün)

    p2 = nullptr;  
    // p2 də boş göstəriciyə çevrilir

    p1 = new int{11};   
    // p1 üçün yeni dinamik obyekt yaradılır və ona işarə edir

    std::cout << *p1 << std::endl;  
    // yeni obyektin qiyməti çap olunur → 11

    delete p1;  
    // ayrılmış yaddaş yenidən azad edilir
}

/*
Burada p1 göstəricisinin işarə etdiyi obyekt silindikdən sonra, 
bu göstəriciyə dinamik yaddaşda yaradılmış başqa bir obyektin ünvanı verilir. 
Buna görə də p1 göstəricisindən yenidən istifadə etmək mümkündür.

Amma p2 göstəricisində saxlanılan ünvan əvvəlki obyektə aid olduğu üçün artıq etibarsızdır və ondan istifadə etmək olmaz.
*/

//------------------C++-da dinamik massivlər-------------------//
/*
C++ dilində ayrıca dinamik obyektlərdən başqa dinamik massivlərdən də istifadə etmək mümkündür.
Dinamik massiv üçün yaddaş ayrılması üçün new operatoru 
istifadə olunur və onun ardınca kvadrat mötərizədə 
massivin neçə obyekt saxlayacağı göstərilir.
*/

int *numbers {new int[4]}; // 4 ədəd elementdən ibarət dinamik massiv
// və ya belə də yaza bilərik
// int *numbers = new int[4];

#include <iostream>
using namespace std;

// Funksiya dinamik massiv yaradır və onun ünvanını qaytarır
int* createArray(int n)
{
    int* arr = new int[n]; // n elementlik dinamik massiv

    for(int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i]; // massivi istifadəçi daxil etsin
    }

    return arr;
}

int main()
{
    int n;
    cout << "Massivin ölçüsünü daxil edin: ";
    cin >> n;

    // Dinamik massiv yaradılır
    int* myArray = createArray(n);

    // Massivi çap etmək
    cout << "Massivin elementləri: ";
    for(int i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Yaddaşı boşaltmaq
    delete[] myArray;

    return 0;
}

/*
Bu halda new operatoru yaradılan massivdəki birinci elementə işarə edən int tipli göstərici qaytarır.
Bu nümunədə 4 elementlik int tipli massiv müəyyən edilir, amma hər birinin dəyəri təyin olunmamışdır.
Lakin biz massivi dəyərlərlə də ilkinləşdirə bilərik.
*/

int *numbers1 {new int[4]{}};                   // massiv ədədlərdən ibarətdir: 0, 0, 0, 0
int *numbers2 {new int[4]{ 1, 2, 3, 4 }};  // massiv ədədlərdən ibarətdir: 1, 2, 3, 4
int *numbers3 {new int[4]{ 1, 2 }};          // massiv ədədlərdən ibarətdir: 1, 2, 0, 0

// oxşar massiv təyinatları
// int *numbers1 = new int[4]{};                 // massiv ədədlərdən ibarətdir: 0, 0, 0, 0
// int *numbers1 = new int[4]();                 // massiv ədədlərdən ibarətdir: 0, 0, 0, 0
// int *numbers2 = new int[4]{ 1, 2, 3, 4 }; // massiv ədədlərdən ibarətdir: 1, 2, 3, 4
// int *numbers3 = new int[4]{ 1, 2 };         // massiv ədədlərdən ibarətdir: 1, 2, 0, 0

/*
Massivi konkret dəyərlərlə ilkinləşdirərkən nəzərə almaq lazımdır ki, 
əgər mötərizədəki dəyərlərin sayı massivin ölçüsündən çox olarsa, 
new operatoru uğursuz olacaq və massivi yaratmaq mümkün olmayacaq.
Əksinə, əgər verilən dəyərlərin sayı massivin ölçüsündən azdırsa, 
dəyərləri göstərilməyən elementlər default dəyərlə (məsələn, int üçün 0) ilkinləşdiriləcək.
Qeyd etmək lazımdır ki, C++20 standartına əlavə edilmiş imkan sayəsində massivin ölçüsünü 
göstərməyə ehtiyac qalmır. Yəni C++20 istifadə olunursa, massiv ölçüsünü yazmadan da yarada bilərik.
*/

int *numbers {new int[]{ 1, 2, 3, 4 }}; // massiv ədədlərdən ibarətdir: 1, 2, 3, 4

/*
Dinamik massiv yaradıldıqdan sonra biz onu alınan göstərici vasitəsilə istifadə edə, 
elementlərini oxuya və dəyişdirə bilərik.
*/

int *numbers {new int[4]{ 1, 2, 3, 4 }}; 

// elementləri massiv sintaksisi ilə əldə etmək
std::cout << numbers[0] << std::endl;       // 1
std::cout << numbers[1] << std::endl;       // 2

// elementləri göstəricini dereferensasiya edərək əldə etmək
std::cout << *numbers << std::endl;         // 1
std::cout << *(numbers+1) << std::endl;     // 2

/*
Dinamik massivə elementlərə daxil olmaq üçün həm massiv sintaksisini (numbers[0]), 
həm də göstəricini dereferensasiya etmə əməliyyatını (*numbers) istifadə etmək olar.
Beləliklə, bu massivi dövr etmək üçün müxtəlif üsullardan istifadə etmək mümkündür.
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned n{ 5 };  // massivin ölçüsü
    int* p{ new int[n] { 1, 2, 3, 4, 5 } }; 
    // Dinamik massiv yaradılır və dəyərlərlə ilkinləşdirilir
    // p göstəricisi massivin ilk elementinə işarə edir

    // 1. İndekslərdən istifadə edərək massivi çap etmək
    for (unsigned i{}; i < n; i++)
    {
        cout << p[i] << "\t"; 
        // p[i] = *(p + i)
        // burada i elementin indeksi, p isə massivə işarə edən göstəricidir
    }
    cout << endl;

    // 2. Göstəriciyə ünvan əlavə etməklə massivi çap etmək
    for (unsigned i{}; i < n; i++)
    {
        cout << *(p + i) << "\t"; 
        // p + i → massivin i-ci elementinin ünvanı
        // *(p + i) → həmin elementin dəyəri
    }
    cout << endl;

    // 3. Köməkçi göstərici vasitəsilə massivi gəzmək
    for (int* q{ p }; q != p + n; q++)
    {
        cout << *q << "\t"; 
        // q göstəricisi massivin elementlərini bir-bir göstərir
        // *q → cari elementin dəyəri
        // q++ → növbəti elementə keçir
    }
    cout << endl;

    delete[] p; // yaddaşı boşaldırıq, massivi silirik

    return 0;
}

/*
Diqqət yetirin ki, dinamik massiv üçün ölçünü təyin edərkən 
standart massivlərdə olduğu kimi mütləq konstantdan istifadə etməyə 
ehtiyac yoxdur — adi dəyişəndən də istifadə etmək olar.

Dinamik massivi silmək və onun tutduğu yaddaşı azad etmək üçün isə 
delete operatorunun xüsusi forması tətbiq olunur.
*/

/*
delete [] dinamik_massivə_göstərici;
Məsələn:
*/

#include <iostream>

int main()
{
    unsigned n{ 5 };  // massiv ölçüsü
    int* p{ new int[n]{ 1, 2, 3, 4, 5 } }; // dinamik massiv üçün yaddaş ayrılır

    // indekslərdən istifadə edirik
    for (unsigned i{}; i < n; i++)
    {
        std::cout << p[i] << "\t";
    }
    std::cout << std::endl;

    delete[] p; // ayrılmış yaddaş azad edilir
}

/*
Yaddaş azad edildikdən sonra göstəricinin köhnə ünvanı 
saxlamaması üçün onu da sıfırlamaq (null etmək) tövsiyə olunur:
*/

delete[] p;
p = nullptr;    // göstəricini sıfırlayırıq

//------------------------Çoxölçülü massivlər-------------------//

/*
Biz həmçinin çoxölçülü dinamik massivlər də yarada bilərik. 
İkiölçülü massivləri nümunə kimi nəzərdən keçirək.
Bəs ikiölçülü massiv əslində nədir? Bu, 
massivlərdən ibarət bir toplusudur (yəni massivlərin massivi).

Müvafiq olaraq, dinamik ikiölçülü massiv yaratmaq üçün əvvəlcə göstəricilərdən ibarət ümumi dinamik massiv yaradırıq, daha sonra isə onun hər bir elementi üçün daxili (iç-içə) dinamik massivlər yaradırıq.

Ümumi halda bu proses aşağıdakı kimi görünür:
*/













