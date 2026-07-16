# 21. Yaş kateqoriyası
# Yaş daxil edilir: 0-12 "Uşaq", 13-17 "Yeniyetmə", 18 və yuxarı "Böyük".
#
# Giriş:  Bir tam ədəd (yaş)
# Çıxış:  Uyğun kateqoriya
# Nümunə: 15 → Yeniyetmə

yas = int(input())
if yas <= 12:
    print("Uşaq")
elif yas <= 17:
    print("Yeniyetmə")
else:
    print("Böyük")
