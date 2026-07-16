# 58. Qalıqla bölünmə
# İki ədəd (a, b) daxil edilir. a, b-yə bölünürsə "Bölünür" çap et, bölünmürsə qalığı göstər.
#
# Giriş:  İki tam ədəd: a, b
# Çıxış:  "Bölünür" və ya qalığın özü
# Nümunə: 17 5 → 2

a, b = map(int, input().split())
if a % b == 0:
    print("Bölünür")
else:
    print(a % b)
