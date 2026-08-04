"""
Sual 100: N eded (sehir, x, y) kortecini daxil edib, butun sehirler arasinda
en qisa 'gez-dolas' (brute-force TSP, N<=8) marsrutunun uzunlugunu tapin.

Giris (Input):
    1-ci setirde N (<=8).
    Sonrakı N setirde "sehir x y".

Cixis (Output):
    En qisa marsrutun umumi mesafesi (2 onluq), baslangic sehire qayidisla.

Numune:
    Giris:  3
            A 0 0
            B 3 0
            C 3 4
    Cixis:  12.00

Alqoritmin izahi:
    N kicik oldugu ucun (<=8), butun sehirlerin (baslangicdan basqa) mumkun
    permutasiyalarini yaradib, her biri ucun marsrutun umumi mesafesini
    hesablayib, en kicik olanini seciriz. itertools.permutations kortecler
    uzerinde butun mumkun sıralamaları qaytarir.
"""

import math
from itertools import permutations

n = int(input())

sehirler = []
for _ in range(n):
    ad, x, y = input().split()
    sehirler.append((ad, int(x), int(y)))
sehirler = tuple(sehirler)


def mesafe(p1, p2):
    return math.sqrt((p1[1] - p2[1]) ** 2 + (p1[2] - p2[2]) ** 2)


basla = sehirler[0]
qalanlar = sehirler[1:]

en_qisa = float('inf')
for sira in permutations(qalanlar):
    marsrut = (basla,) + sira + (basla,)   # basla -> ... -> basla (qayidis)
    umumi_mesafe = sum(mesafe(marsrut[i], marsrut[i + 1]) for i in range(len(marsrut) - 1))
    en_qisa = min(en_qisa, umumi_mesafe)

print(f"{en_qisa:.2f}")
