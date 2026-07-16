# 46. Taksi tarifi
# Məsafə (km) daxil edilir. İlk 2 km 2 AZN, hər əlavə km 0.5 AZN. Ümumi məbləği hesabla.
#
# Giriş:  Bir kəsr ədəd (məsafə)
# Çıxış:  Ümumi məbləğ
# Nümunə: 5 → 3.5

mesafe = float(input())
if mesafe <= 2:
    umumi = 2
else:
    umumi = 2 + (mesafe - 2) * 0.5
print(umumi)
