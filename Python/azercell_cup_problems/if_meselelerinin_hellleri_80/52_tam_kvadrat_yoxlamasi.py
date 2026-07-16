# 52. Tam kvadrat yoxlaması
# Bir ədəd daxil edilir. Onun tam kvadrat (məs. 16=4²) olub-olmadığını yoxla.
#
# Giriş:  Bir tam ədəd
# Çıxış:  "Tam kvadratdır" və ya "Tam kvadrat deyil"
# Nümunə: 16 → Tam kvadratdır

x = int(input())
kok = int(x ** 0.5)
if kok * kok == x or (kok + 1) * (kok + 1) == x:
    print("Tam kvadratdır")
else:
    print("Tam kvadrat deyil")
