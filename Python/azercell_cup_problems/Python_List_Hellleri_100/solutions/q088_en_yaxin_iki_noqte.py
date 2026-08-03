"""
Sual 88: N noqte arasinda en yaxin iki noqte arasindaki mesafeni tapin
(brute-force, O(N^2)).

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde her biri "x y" koordinatlari.

Cixis (Output):
    En yaxin iki noqte arasindaki Evklid mesafesi, 2 onluq reqemle.

Numune:
    Giris:  3
            0 0
            3 4
            1 1
    Cixis:  1.41   (0,0 ve 1,1 arasindaki mesafe = sqrt(2) ≈ 1.41)

Alqoritmin izahi:
    Butun noqte cutlerini (i, j) ic-ice dovrle gezib, Evklid mesafe
    duzstunu (Pifagor teoremi) ile hesablayiriq: sqrt((x1-x2)^2+(y1-y2)^2).
    Butun cutler arasinda en kicik mesafeni saxlayiriq.
"""

import math

n = int(input())
noqteler = []
for _ in range(n):
    x, y = map(int, input().split())
    noqteler.append((x, y))

en_kicik = float('inf')  # basланgicda "sonsuz boyuk" qebul edirik
for i in range(n):
    for j in range(i + 1, n):
        x1, y1 = noqteler[i]
        x2, y2 = noqteler[j]
        mesafe = math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)
        en_kicik = min(en_kicik, mesafe)

print(f"{en_kicik:.2f}")
