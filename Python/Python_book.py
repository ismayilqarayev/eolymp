##----------/ seyife 1 /----------------##


# Python dilində yazılmış proqram təlimatlar (instruksiyalar) 
# toplusundan ibarətdir.
# Hər bir təlimat yeni sətrdə yerləşdirilir.

# Məsələn:

print(2+3)
print("Hello")

# Python-da boşluqlar (indentlər) çox böyük rol oynayır.
# Səhv qoyulmuş boşluq faktiki olaraq xəta hesab olunur.

# Məsələn, aşağıdakı halda biz xəta alacağıq, baxmayaraq ki, kod əvvəlki nümunəyə çox oxşardır:

print(2+3)
   print("Hello")

# Ona görə də yeni təlimatları sətrin əvvəlində yerləşdirmək lazımdır.
# Bu, Python-un C# və ya Java kimi digər proqramlaşdırma 
# dillərindən əsas fərqlərindən biridir.

# Lakin nəzərə almaq lazımdır ki, dilin bəzi konstruksiyaları bir neçə sətrdən ibarət ola bilər.
# Məsələn, if şərt konstruksiyası:

if 1 < 2:
    print("Hello")
# Bu nümunədə əgər 1, 2-dən kiçik olarsa, proqram ekrana "Hello" sözünü çıxarır.
# Burada diqqət yetirməli məqam ondan ibarətdir ki, print("Hello") artıq tək bir əmri ifadə etmir — o, 
# if şərtinin içində işlədilir. Buna görə də həmin sətrin əvvəlində mütləq boşluq (indent) olmalıdır.

# Adətən proqramçılar boşluğu 4 boşluq ilə edirlər. 4, 8, 12 kimi 4-ün qatları kodu daha səliqəli göstərir.
# Amma əgər təsadüfən 5 boşluq qoysan da, proqram işləməyinə davam edəcək — Python buna görə xəta vermir.

# Belə şərt blokları çox olmadığı üçün, harada boşluq qoymaq lazım olduğunu qarışdırmaq da çətin deyil. 
# Bir qayda var: blok içində yazılan hər əmrin əvvəlində boşluq olmalıdır.


##----------/ seyife 2 /----------------##

#Python-da registrə həssaslıq

# Python-da böyük və kiçik hərflər çox önəmlidir. Yəni print, Print və ya PRINT — bunların hamısı Python üçün fərqli sözlərdir.
# Ona görə də əgər ekrana nəsə çıxarmaq üçün səhvən print əvəzinə Print yazsan, proqram bunu tanımayacaq və xəta verəcək.

Print("Hello World")

# Şərhlər(Komentlər)

# Hər hansı bir kod hissəsinin nə etdiyini göstərmək üçün şərhlər tətbiq olunur. 
# Proqramın tərcüməsi və icrası zamanı interpretator şərhləri nəzərə almır, 
# buna görə də onların proqramın işləməsinə heç bir təsiri yoxdur.

#Python dilində şərhlər blok şəklində və sətir şəklində olur.

# Sətir şəklində olan şərhlər # işarəsi ilə başlayır. Onlar ayrıca bir sətirdə yerləşə bilər:

# Konsola "Hello World" mesajının çıxarılması
print("Hello World")


# '#' işarəsindən sonra gələn istənilən simvollar şərh hesab olunur.
#  Yəni yuxarıdakı nümunədə kodun ilk iki sətri şərh kimi qəbul edilir.

# Şərhlər həmçinin icra olunan əmrdən sonra, həmin sətirin sonunda da yerləşə bilər.

print("Hello World")  # Konsola mesajın çıxarılması

# Blok şərhlərində şərh mətninin əvvəlində və sonunda üç 
# tək dırnaq işarəsi qoyulur: ''' şərh mətni '''.
# Məsələn:

''' 
    Konsola
    Hello World
    mesajının çıxarılması
'''
print("Hello World")



##----------/ seyife 3 /----------------##
"""
Funksiyalar

Python bir sıra daxili funksiyalar təqdim edir. 
Onlardan bəziləri xüsusilə proqramlaşdırma dilini öyrənməyin ilkin mərhələlərində çox tez-tez istifadə olunur. 
Buna görə də bu funksiyalara nəzər salaq.

Konsola məlumat çıxarmaq üçün əsas funksiya print() funksiyasıdır. 
Bu funksiyaya arqument kimi ekranda göstərmək istədiyimiz sətir (mətn) ötürülür.
"""

print("Hello Python")

"""
Əgər konsola bir neçə dəyər çıxarmaq lazımdırsa, 
onları vergül vasitəsilə print funksiyasına ötürə bilərik.
"""

print("Full name:", "Tom", "Smith")

"""
Nəticədə bütün ötürülən dəyərlər 
boşluq vasitəsilə birləşərək vahid sətirə çevriləcək.
"""

#Full name: Tom Smith

"""
Əgər print funksiyası çıxış üçün cavabdehdirsə, 
onda input funksiyası məlumatın daxil edilməsi üçün istifadə olunur. 
Bu funksiya istəyə bağlı olaraq istifadəçiyə göstərilən dəvət (sual) 
mətnini qəbul edə bilər və istifadəçi tərəfindən daxil edilən məlumatı 
sətir (string) şəklində geri qaytarır. 
Qaytarılan bu dəyəri isə biz dəyişəndə saxlaya bilərik.
"""
def proqram():
    ad = input("Adınızı daxil edin: ")
    print("Salam " + ad)

if __name__ == "__main__":
    proqram()

#“Konsol çıxışı
"""
Adınızı daxil edin: İsmayıl
Salam İsmayıl
"""

##----------/ seyife 4 /----------------##

#Dəyişənlər və verilənlər tipləri
#Dəyişənlər

"""
Dəyişənlər məlumatı saxlamaq üçün nəzərdə tutulub. 
Python dilində dəyişənin adı əlifba hərfi və ya alt xətt (_) işarəsi ilə başlamalıdır. 
Adın içində əlifba-rəqəm simvolları və alt xətt ola bilər. 
Bundan əlavə, dəyişənin adı Python-un açar sözləri ilə eyni olmamalıdır.
"""

"""
Məntiqi dəyərlər: True, False, None

Şərt və dövr operatorları: if, elif, else, for, while, break, continue

Funksiya və siniflər: def, class, return, lambda

İdarəetmə və istisnalar: try, except, finally, raise, assert

Modullar və kontekst: import, from, as, with

Digər açar sözlər: global, nonlocal, del, not, and, or, is, in, yield, async, await
"""

#Məsələn, dəyişən yaradaq:
name = """Tom"""
#Burada name adlı dəyişən müəyyən olunub və o «Tom» sətrini saxlayır.

"""
Python-da dəyişənlərin adlandırılmasında iki əsas üsuldan 
istifadə olunur: camelCase və underscore (snake_case) notasiya.
"""

# iki fərqli dəyişən
name = "Tom"
Name = "Tom"

