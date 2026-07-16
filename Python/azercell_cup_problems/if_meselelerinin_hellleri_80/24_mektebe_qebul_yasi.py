# 24. Məktəbə qəbul yaşı
# Uşağın yaşı daxil edilir. 6 və ya yuxarıdırsa "Qəbul oluna bilər", əks halda "Hələ tezdir".
#
# Giriş:  Bir tam ədəd (yaş)
# Çıxış:  Uyğun mesaj
# Nümunə: 7 → Qəbul oluna bilər

yas = int(input())
if yas >= 6:
    print("Qəbul oluna bilər")
else:
    print("Hələ tezdir")
