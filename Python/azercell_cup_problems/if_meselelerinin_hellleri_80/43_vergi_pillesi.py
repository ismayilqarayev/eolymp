# 43. Vergi pilləsi
# İllik gəlir daxil edilir. 8000 AZN-ə qədər vergi 0%, 8000-dən çox hissəyə 14% vergi tətbiq olunur.
#
# Giriş:  Bir tam ədəd (gəlir)
# Çıxış:  Ödəniləcək vergi məbləği
# Nümunə: 10000 → 280

gelir = int(input())
if gelir <= 8000:
    vergi = 0
else:
    vergi = (gelir - 8000) * 0.14
print(vergi)
