# 26. Seçki hüququ
# Yaş daxil edilir. 18 və ya yuxarıdırsa "Səs verə bilər", əks halda "Səs verə bilməz".
#
# Giriş:  Bir tam ədəd (yaş)
# Çıxış:  Uyğun mesaj
# Nümunə: 18 → Səs verə bilər

yas = int(input())
if yas >= 18:
    print("Səs verə bilər")
else:
    print("Səs verə bilməz")
