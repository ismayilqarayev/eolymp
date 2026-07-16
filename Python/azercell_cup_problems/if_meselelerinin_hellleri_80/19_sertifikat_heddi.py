# 19. Sertifikat həddi
# Düzgün cavabların sayı (cəmi 50 sualdan) daxil edilir. 45-dən çoxdursa "Qızıl sertifikat", 35-44 "Gümüş sertifikat", əks halda "Sertifikat yoxdur".
#
# Giriş:  Bir tam ədəd (düzgün cavab sayı)
# Çıxış:  Uyğun mesaj
# Nümunə: 40 → Gümüş sertifikat

duzgun = int(input())
if duzgun > 45:
    print("Qızıl sertifikat")
elif duzgun >= 35:
    print("Gümüş sertifikat")
else:
    print("Sertifikat yoxdur")
