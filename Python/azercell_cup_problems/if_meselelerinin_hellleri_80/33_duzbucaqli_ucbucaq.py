# 33. Düzbucaqlı üçbucaq
# Üç tərəf uzunluğu daxil edilir. Pifaqor teoreminə görə düzbucaqlı üçbucaq olub-olmadığını yoxla.
#
# Giriş:  Üç tam ədəd (tərəflər, ən böyüyü sonda)
# Çıxış:  "Düzbucaqlıdır" və ya "Düzbucaqlı deyil"
# Nümunə: 3 4 5 → Düzbucaqlıdır

a, b, c = map(int, input().split())
if a ** 2 + b ** 2 == c ** 2:
    print("Düzbucaqlıdır")
else:
    print("Düzbucaqlı deyil")
