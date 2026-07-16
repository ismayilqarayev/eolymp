# 22. Sürücülük yaşı
# Yaş daxil edilir. 18 və ya yuxarıdırsa "Vəsiqə ala bilər", əks halda "Hələ ala bilməz".
#
# Giriş:  Bir tam ədəd (yaş)
# Çıxış:  Uyğun mesaj
# Nümunə: 16 → Hələ ala bilməz

yas = int(input())
if yas >= 18:
    print("Vəsiqə ala bilər")
else:
    print("Hələ ala bilməz")
