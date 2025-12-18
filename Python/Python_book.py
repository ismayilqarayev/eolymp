#---------------------------------------------------------------------------------------
# 1 ci 
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

#----------------------------------------------------------------------------------------------
# 2 ci
# Bu nümunədə əgər 1, 2-dən kiçik olarsa, proqram ekrana "Hello" sözünü çıxarır.
# Burada diqqət yetirməli məqam ondan ibarətdir ki, print("Hello") artıq tək bir əmri ifadə etmir — o, 
# if şərtinin içində işlədilir. Buna görə də həmin sətrin əvvəlində mütləq boşluq (indent) olmalıdır.

# Adətən proqramçılar boşluğu 4 boşluq ilə edirlər. 4, 8, 12 kimi 4-ün qatları kodu daha səliqəli göstərir.
# Amma əgər təsadüfən 5 boşluq qoysan da, proqram işləməyinə davam edəcək — Python buna görə xəta vermir.

# Belə şərt blokları çox olmadığı üçün, harada boşluq qoymaq lazım olduğunu qarışdırmaq da çətin deyil. 
# Bir qayda var: blok içində yazılan hər əmrin əvvəlində boşluq olmalıdır.

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

"""
Əsas funksiyalar

Python bir sıra daxili funksiyalar təqdim edir. 
Onlardan bəziləri xüsusilə proqramlaşdırma dilini öyrənməyin ilkin mərhələlərində çox tez-tez istifadə olunur. 
Buna görə də bu funksiyalara nəzər salaq.

Konsola məlumat çıxarmaq üçün əsas funksiya print() funksiyasıdır. 
Bu funksiyaya arqument kimi ekranda göstərmək istədiyimiz sətir (mətn) ötürülür.
"""

