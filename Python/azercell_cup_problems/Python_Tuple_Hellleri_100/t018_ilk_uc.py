"""
Sual 18: Kortecden slicing istifade ederek ilk 3 elementi cap edin.

Giris (Input):
    1-ci setirde N (N>=3).
    2-ci setirde N eded.

Cixis (Output):
    Ilk 3 element.

Numune:
    Giris:  5
            1 2 3 4 5
    Cixis:  1 2 3
"""

n = int(input())
kortec = tuple(map(int, input().split()))

# [:3] -- basdan 3-cu indekse qeder (3 daxil deyil) goturur
print(*kortec[:3])
