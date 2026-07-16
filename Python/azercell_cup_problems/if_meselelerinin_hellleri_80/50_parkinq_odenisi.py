# 50. Parkinq ödənişi
# Saat sayı daxil edilir. İlk 1 saat pulsuz, sonrakı hər saat 1 AZN. Ümumi ödənişi hesabla.
#
# Giriş:  Bir tam ədəd (saat)
# Çıxış:  Ümumi ödəniş
# Nümunə: 4 → 3

saat = int(input())
if saat <= 1:
    print(0)
else:
    print(saat - 1)
