# 1. İki ədədin böyüyü
# Klaviaturadan iki tam ədəd daxil edilir. Onlardan böyük olanını çap et. Ədədlər bərabərdirsə, "Bərabərdir" yaz.
#
# Giriş:  İki tam ədəd (bir sətirdə, boşluqla ayrılmış)
# Çıxış:  Böyük ədəd və ya "Bərabərdir"
# Nümunə: 7 12 → 12

a, b = map(int, input().split())
if a > b:
    print(a)
elif b > a:
    print(b)
else:
    print("Bərabərdir")
