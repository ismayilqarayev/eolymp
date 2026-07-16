# 7. Aralıqda olma yoxlaması
# Bir ədəd və aralığın sərhədləri (a, b) daxil edilir. Ədədin [a, b] aralığında olub-olmadığını yoxla.
#
# Giriş:  Üç tam ədəd: x, a, b (bu ardıcıllıqla)
# Çıxış:  "Aralıqdadır" və ya "Aralıqda deyil"
# Nümunə: 5 1 10 → Aralıqdadır

x, a, b = map(int, input().split())
if a <= x <= b:
    print("Aralıqdadır")
else:
    print("Aralıqda deyil")
