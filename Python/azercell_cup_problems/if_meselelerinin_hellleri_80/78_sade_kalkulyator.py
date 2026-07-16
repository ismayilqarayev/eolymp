# 78. Sadə kalkulyator
# İki ədəd və əməliyyat işarəsi (+, -, *, /) daxil edilir. Uyğun əməliyyatı yerinə yetirib nəticəni çap et (bölmədə sıfıra bölünməni yoxla).
#
# Giriş:  İki ədəd və bir işarə (boşluqla ayrılmış)
# Çıxış:  Əməliyyatın nəticəsi
# Nümunə: 6 3 / → 2.0

a, b, emeliyyat = input().split()
a = float(a)
b = float(b)
if emeliyyat == "+":
    print(a + b)
elif emeliyyat == "-":
    print(a - b)
elif emeliyyat == "*":
    print(a * b)
elif emeliyyat == "/":
    if b == 0:
        print("Sıfıra bölmək olmaz")
    else:
        print(a / b)
