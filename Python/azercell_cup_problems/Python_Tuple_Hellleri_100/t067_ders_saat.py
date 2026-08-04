"""
Sual 67: N eded (ders, saat) kortecini daxil edib, umumi saat sayini tapin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "ders saat".

Cixis (Output):
    Umumi saat.

Numune:
    Giris:  2
            Riyaziyyat 4
            Fizika 3
    Cixis:  7
"""

n = int(input())

umumi_saat = 0
for _ in range(n):
    ders, saat = input().split()
    umumi_saat += int(saat)

print(umumi_saat)
