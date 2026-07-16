# 51. 3 və 5-ə bölünmə
# Bir ədəd daxil edilir. Həm 3-ə, həm 5-ə bölünürsə "FizzBuzz", yalnız 3-ə bölünürsə "Fizz", yalnız 5-ə bölünürsə "Buzz", heç birinə bölünmürsə ədədin özünü çap et.
#
# Giriş:  Bir tam ədəd
# Çıxış:  Uyğun söz və ya ədəd
# Nümunə: 15 → FizzBuzz

x = int(input())
if x % 3 == 0 and x % 5 == 0:
    print("FizzBuzz")
elif x % 3 == 0:
    print("Fizz")
elif x % 5 == 0:
    print("Buzz")
else:
    print(x)
