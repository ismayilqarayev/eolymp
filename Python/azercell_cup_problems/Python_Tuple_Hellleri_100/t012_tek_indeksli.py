"""
Sual 12: Kortecin tek indeksli elementlerini cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Indeksi tek olan elementler.

Numune:
    Giris:  5
            10 20 30 40 50
    Cixis:  20 40
"""

n = int(input())
kortec = tuple(map(int, input().split()))

netice = kortec[1::2]

print(*netice)
