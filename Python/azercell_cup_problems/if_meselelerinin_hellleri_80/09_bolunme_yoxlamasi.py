# 9. Bölünmə yoxlaması
# İki tam ədəd (a və b) daxil edilir. a-nın b-yə bölünüb-bölünmədiyini yoxla.
#
# Giriş:  İki tam ədəd: a, b
# Çıxış:  "Bölünür" və ya "Bölünmür"
# Nümunə: 12 4 → Bölünür

a, b = map(int, input().split())
if a % b == 0:
    print("Bölünür")
else:
    print("Bölünmür")
