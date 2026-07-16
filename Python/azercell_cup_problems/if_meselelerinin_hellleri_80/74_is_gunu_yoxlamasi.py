# 74. İş günü yoxlaması
# Həftənin günü (mətn olaraq) daxil edilir. "Şənbə" və ya "Bazar"dırsa "İstirahət günüdür", əks halda "İş günüdür" çap et.
#
# Giriş:  Bir söz (gün adı)
# Çıxış:  Uyğun mesaj
# Nümunə: Şənbə → İstirahət günüdür

gun = input()
if gun == "Şənbə" or gun == "Bazar":
    print("İstirahət günüdür")
else:
    print("İş günüdür")
