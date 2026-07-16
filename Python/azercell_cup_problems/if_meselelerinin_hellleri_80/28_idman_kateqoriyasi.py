# 28. İdman kateqoriyası
# Yaş daxil edilir: 10-dan az "U10", 10-13 "U13", 14-17 "U17", 18 və yuxarı "Böyüklər".
#
# Giriş:  Bir tam ədəd (yaş)
# Çıxış:  Uyğun kateqoriya adı
# Nümunə: 12 → U13

yas = int(input())
if yas < 10:
    print("U10")
elif yas <= 13:
    print("U13")
elif yas <= 17:
    print("U17")
else:
    print("Böyüklər")
