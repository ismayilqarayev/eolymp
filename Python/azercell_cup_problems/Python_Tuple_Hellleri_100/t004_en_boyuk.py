"""
Sual 4: Kortecdeki en boyuk elementi tapin (max() istifade etmeden).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    En boyuk element.

Numune:
    Giris:  5
            3 7 2 9 4
    Cixis:  9
"""

n = int(input())
kortec = tuple(map(int, input().split()))

en_boyuk = kortec[0]
for x in kortec:
    if x > en_boyuk:
        en_boyuk = x

print(en_boyuk)
