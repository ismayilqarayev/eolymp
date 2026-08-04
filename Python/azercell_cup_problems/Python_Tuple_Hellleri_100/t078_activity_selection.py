"""
Sual 78: N eded (ad, baslangic, son) kortecini daxil edib, maksimum sayda
ust-uste dusmeyen tapsirigi secin (activity selection, greedy).

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "ad baslangic son".

Cixis (Output):
    Secilen tapsiriqlarin adlari.

Numune:
    Giris:  3
            A 1 3
            B 2 4
            C 4 6
    Cixis:  A
            C
"""

n = int(input())

tapsiriqlar = []
for _ in range(n):
    ad, b, s = input().split()
    tapsiriqlar.append((ad, int(b), int(s)))

# Bitme vaxtina (indeks 2) gore siralayiriq
tapsiriqlar.sort(key=lambda t: t[2])

son_bitme = -float('inf')
for ad, b, s in tapsiriqlar:
    if b >= son_bitme:
        print(ad)
        son_bitme = s
