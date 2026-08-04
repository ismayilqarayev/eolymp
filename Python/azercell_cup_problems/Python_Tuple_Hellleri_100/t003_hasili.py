"""
Sual 3: Kortecin butun elementlerinin hasilini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Butun elementlerin hasili.

Numune:
    Giris:  3
            2 3 4
    Cixis:  24
"""

n = int(input())
kortec = tuple(map(int, input().split()))

hasil = 1
for x in kortec:
    hasil *= x

print(hasil)
