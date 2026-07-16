# 68. Sonluq yoxlaması
# Bir söz daxil edilir. Sözün "lıq" hərf birləşməsi ilə bitib-bitmədiyini yoxla.
#
# Giriş:  Bir söz
# Çıxış:  "Bəli" və ya "Xeyr"
# Nümunə: dostluq → Bəli

soz = input()
if soz.endswith(("lıq", "lik", "luq", "lük")):
    print("Bəli")
else:
    print("Xeyr")
