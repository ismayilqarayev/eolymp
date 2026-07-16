# 39. Perimetrlərin müqayisəsi
# İki fiqurun perimetri daxil edilir. Hansı daha böyükdürsə onu bildir.
#
# Giriş:  İki tam ədəd (perimetr1, perimetr2)
# Çıxış:  "Birinci fiqur böyükdür", "İkinci fiqur böyükdür" və ya "Bərabərdir"
# Nümunə: 20 15 → Birinci fiqur böyükdür

p1, p2 = map(int, input().split())
if p1 > p2:
    print("Birinci fiqur böyükdür")
elif p2 > p1:
    print("İkinci fiqur böyükdür")
else:
    print("Bərabərdir")
