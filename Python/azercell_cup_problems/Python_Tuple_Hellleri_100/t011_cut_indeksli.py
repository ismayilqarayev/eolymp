"""
Sual 11: Kortecin cut indeksli elementlerini cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Indeksi cut olan elementler.

Numune:
    Giris:  5
            10 20 30 40 50
    Cixis:  10 30 50
"""

n = int(input())
kortec = tuple(map(int, input().split()))

# Slicing kortec ustunde de eyni sekilde islyir: bashla:son:addim
netice = kortec[0::2]

print(*netice)
