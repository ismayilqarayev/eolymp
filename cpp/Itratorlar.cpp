//1
//Iteratorlar

/*
Iteratorlər konteynerlərin elementlərinə çıxışı təmin edən və obyekt-yönlü proqramlaşdırmada geniş yayılmış “Iterator” dizayn şablonunun reallaşdırılmasıdır.
Iteratorlərin əsas təyinatı konteyner daxilində yerləşən elementlər üzərində ardıcıl hərəkəti və onların emalını təmin etməkdir. Bu mexanizm vasitəsilə elementlərin oxunması və üzərində əməliyyatların aparılması daha sadə və rahat şəkildə həyata keçirilir.
C++ proqramlaşdırma dilində iteratorlər müxtəlif tip konteynerlər üçün vahid interfeys təqdim edir. Bu xüsusiyyət proqramçıya fərqli konteynerlərin elementləri ilə işləyərkən eyni yanaşmadan istifadə etməyə imkan verir və kodun oxunaqlılığını və universallığını artırır.
Qeyd etmək lazımdır ki, iteratorlara yalnız konteynerlər malikdir. Konteyner adapterləri olan std::stack, std::queue və std::priority_queue tipləri isə iteratorları dəstəkləmir, yəni onlar üçün iteratorlardan istifadə etmək mümkün deyil.
Iterator iterator tipi ilə təsvir olunur. Hər bir konteyner üçün iteratorun konkret tipi fərqli olur.
Məsələn, list<int> konteyneri üçün iteratorun tipi list<int>::iterator,
vector<int> konteyneri üçün isə vector<int>::iterator formasındadır və s.
Buna baxmayaraq, elementlərə çıxış üçün istifadə olunan ümumi funksionallıq eynidir, yəni müxtəlif konteynerlərin iteratorları ilə demək olar ki, eyni üsulla işləmək mümkündür.
*/

/*
C++ dilində konteynerlər iteratorları əldə etmək üçün begin() və end() funksiyalarına malikdir.
begin() – konteynerdəki ilk elementə işarə edən iteratoru qaytarır (əgər konteyner boş deyilsə).

end() – konteynerin sonrakı mövqeyinə (yəni son elementdən sonrakı yerə) işarə edən iteratoru qaytarır.

Əgər konteyner boşdursa, begin() və end() tərəfindən qaytarılan iteratorlar eyni olacaq.
Əgər begin() != end() deyilsə, demək konteynerdə ən azı bir element mövcuddur.
*/

//---------------------------------------------------------------------

//2


