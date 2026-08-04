"""
Sual 68: Cut indeksli ve tek indeksli elementleri ayri-ayri kortec kimi
qaytaran funksiya yazin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Iki setirde cut indeksli, tek indeksli elementler.

Numune:
    Giris:  5
            1 2 3 4 5
    Cixis:  1 3 5
            2 4
"""


def cut_tek_ayir(kortec):
    # Funksiya iki korteci "return a, b" ile qaytarir -- bu avtomatik olaraq
    # (a, b) formasinda bir kortec yaradir
    return kortec[0::2], kortec[1::2]


n = int(input())
kortec = tuple(map(int, input().split()))

cutler, tekler = cut_tek_ayir(kortec)
print(*cutler)
print(*tekler)
