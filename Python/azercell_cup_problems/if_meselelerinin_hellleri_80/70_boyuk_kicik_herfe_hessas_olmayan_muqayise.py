# 70. Böyük-kiçik hərfə həssas olmayan müqayisə
# İki söz daxil edilir. Böyük-kiçik hərf fərqi nəzərə alınmadan onların bərabər olub-olmadığını yoxla.
#
# Giriş:  İki söz (boşluqla ayrılmış)
# Çıxış:  "Bərabərdir" və ya "Bərabər deyil"
# Nümunə: Salam salam → Bərabərdir

soz1, soz2 = input().split()
if soz1.lower() == soz2.lower():
    print("Bərabərdir")
else:
    print("Bərabər deyil")
