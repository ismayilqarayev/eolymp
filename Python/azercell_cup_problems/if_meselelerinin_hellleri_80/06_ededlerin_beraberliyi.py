# 6. Ədədlərin bərabərliyi
# İki tam ədəd daxil edilir. Onların bərabər olub-olmadığını yoxla.
#
# Giriş:  İki tam ədəd
# Çıxış:  "Bərabərdir" və ya "Bərabər deyil"
# Nümunə: 5 5 → Bərabərdir

a, b = map(int, input().split())
if a == b:
    print("Bərabərdir")
else:
    print("Bərabər deyil")
