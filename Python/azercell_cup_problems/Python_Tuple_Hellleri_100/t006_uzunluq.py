"""
Sual 6: Kortecin uzunlugunu tapin (len() istifade etmeden).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Kortecin uzunlugu.

Numune:
    Giris:  4
            1 2 3 4
    Cixis:  4
"""

n = int(input())
kortec = tuple(map(int, input().split()))

sayac = 0
for _ in kortec:
    sayac += 1

print(sayac)
