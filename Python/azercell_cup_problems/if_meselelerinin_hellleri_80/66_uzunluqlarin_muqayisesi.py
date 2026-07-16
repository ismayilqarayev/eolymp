# 66. Uzunluqların müqayisəsi
# İki söz daxil edilir. Onların uzunluqlarının bərabər olub-olmadığını yoxla.
#
# Giriş:  İki söz (boşluqla ayrılmış)
# Çıxış:  "Bərabərdir" və ya "Bərabər deyil"
# Nümunə: salam dunya → Bərabərdir

soz1, soz2 = input().split()
if len(soz1) == len(soz2):
    print("Bərabərdir")
else:
    print("Bərabər deyil")
