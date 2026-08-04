"""
Sual 70: N eded (oyunçu, xal) kortecini daxil edib, xala gore siralayib ilk 3-u cap edin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "oyunçu xal".

Cixis (Output):
    Xala gore azalan sirada ilk 3.

Numune:
    Giris:  4
            Ali 50
            Vusal 80
            Elvin 65
            Nihad 90
    Cixis:  Nihad 90
            Vusal 80
            Elvin 65
"""

n = int(input())

oyuncular = []
for _ in range(n):
    ad, xal = input().split()
    oyuncular.append((ad, int(xal)))

oyuncular.sort(key=lambda t: -t[1])

# Slicing ile ilk 3 elementi goturruk (siyahi qisa olarsa avtomatik butun siyahi qayidir)
for ad, xal in oyuncular[:3]:
    print(ad, xal)
