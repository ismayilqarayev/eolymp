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
# Bu nümunədə əgər 1, 2-dən kiçikdirsə, proqram ekrana “Hello” yazır.
# Burada mütləq boşluq (indent) qoymaq lazımdır, çünki print("Hello") artıq tək 
# başına işlənmir — o, if şərtinin içindədir.

# Kod yazarkən adətən boşluqlar 4 simvol olur (4, 8, 12 və s.). 
# Bu, sadəcə qaydadır və kodu səliqəli göstərir.Amma əgər sən 4 yox,
# məsələn 5 boşluq qoysan, yenə də işləyəcək — əsas odur ki, 
# həmin blokdakı bütün sətirlər eyni səviyyədə olsun.

# Belə vəziyyətlər çox azdır, ona görə də Python-da boşluqları harada qoymaq
# lazım olduğunu qarışdırmaq çətin deyil.

# Python registrə həssas (böyük-kiçik hərfə həssas) dildir, ona görə də print, 
# Print və ya PRINT fərqli ifadələr sayılır.

# Və əgər konsola məlumat çıxarmaq üçün print metodu əvəzinə Print istifadə 
# etməyə çalışsaq, Python bunu tanımayacaq və xəta verəcək.*Registrə həssaslıq (böyük-kiçik hərf fərqi)