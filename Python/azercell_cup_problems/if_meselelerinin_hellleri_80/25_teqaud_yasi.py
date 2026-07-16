# 25. Təqaüd yaşı
# Yaş daxil edilir. 65 və ya yuxarıdırsa "Təqaüdə çıxa bilər", əks halda "Hələ işləməlidir".
#
# Giriş:  Bir tam ədəd (yaş)
# Çıxış:  Uyğun mesaj
# Nümunə: 70 → Təqaüdə çıxa bilər

yas = int(input())
if yas >= 65:
    print("Təqaüdə çıxa bilər")
else:
    print("Hələ işləməlidir")
