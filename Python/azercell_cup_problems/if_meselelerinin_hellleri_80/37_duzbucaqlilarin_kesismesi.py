# 37. Düzbucaqlıların kəsişməsi
# İki düzbucaqlının sağ-sol sərhədləri (x1, x2 və x3, x4) daxil edilir. Bu iki düzbucaqlının üfüqi oxda kəsişib-kəsişmədiyini yoxla.
#
# Giriş:  Dörd tam ədəd: x1, x2, x3, x4
# Çıxış:  "Kəsişir" və ya "Kəsişmir"
# Nümunə: 1 5 3 8 → Kəsişir

x1, x2, x3, x4 = map(int, input().split())
if x1 <= x4 and x3 <= x2:
    print("Kəsişir")
else:
    print("Kəsişmir")
