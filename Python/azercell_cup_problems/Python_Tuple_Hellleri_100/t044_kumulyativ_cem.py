"""
Sual 44: Kortecdeki elementlerin kumulyativ cemini yeni kortecde saxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Kumulyativ cem.

Numune:
    Giris:  4
            1 2 3 4
    Cixis:  1 3 6 10
"""

n = int(input())
kortec = tuple(map(int, input().split()))

muveqqeti = []
cem = 0
for x in kortec:
    cem += x
    muveqqeti.append(cem)

netice = tuple(muveqqeti)
print(*netice)
