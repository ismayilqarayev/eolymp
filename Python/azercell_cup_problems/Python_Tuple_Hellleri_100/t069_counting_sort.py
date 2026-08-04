"""
Sual 69: Kortecdeki elementleri counting sort ile siralayin (0-100 araligi).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (0-100).

Cixis (Output):
    Siralanmis kortec.

Numune:
    Giris:  5
            4 2 2 8 3
    Cixis:  2 2 3 4 8
"""

n = int(input())
kortec = tuple(map(int, input().split()))

sayac = [0] * 101
for x in kortec:
    sayac[x] += 1

muveqqeti = []
for deyer in range(101):
    muveqqeti.extend([deyer] * sayac[deyer])

netice = tuple(muveqqeti)
print(*netice)
