# 53. Ortaq bölən (2)
# İki ədəd daxil edilir. Hər ikisinin 2-yə bölünüb-bölünmədiyini yoxla.
#
# Giriş:  İki tam ədəd
# Çıxış:  "Hər ikisi cütdür", "Yalnız biri cütdür" və ya "Heç biri cüt deyil"
# Nümunə: 4 6 → Hər ikisi cütdür

a, b = map(int, input().split())
if a % 2 == 0 and b % 2 == 0:
    print("Hər ikisi cütdür")
elif a % 2 == 0 or b % 2 == 0:
    print("Yalnız biri cütdür")
else:
    print("Heç biri cüt deyil")
