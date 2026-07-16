# 60. 10 və 100-ə bölünmə
# Bir ədəd daxil edilir. 100-ə bölünürsə "100-ə bölünür", yalnız 10-a bölünürsə "10-a bölünür", heç birinə bölünmürsə "Heç birinə bölünmür".
#
# Giriş:  Bir tam ədəd
# Çıxış:  Uyğun mesaj
# Nümunə: 100 → 100-ə bölünür

x = int(input())
if x % 100 == 0:
    print("100-ə bölünür")
elif x % 10 == 0:
    print("10-a bölünür")
else:
    print("Heç birinə bölünmür")
