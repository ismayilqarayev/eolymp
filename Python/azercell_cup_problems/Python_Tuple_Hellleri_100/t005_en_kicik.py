"""
Sual 5: Kortecdeki en kicik elementi tapin (min() istifade etmeden).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    En kicik element.

Numune:
    Giris:  5
            3 7 2 9 4
    Cixis:  2
"""

n = int(input())
kortec = tuple(map(int, input().split()))

en_kicik = kortec[0]
for x in kortec:
    if x < en_kicik:
        en_kicik = x

print(en_kicik)
