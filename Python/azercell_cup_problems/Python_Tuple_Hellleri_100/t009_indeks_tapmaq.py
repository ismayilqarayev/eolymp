"""
Sual 9: Kortecde verilmis ededin indeksini tapin (index() istifade etmeden).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde axtarilan eded.

Cixis (Output):
    Ededin indeksi (0-dan basleyerek), tapilmasa -1.

Numune:
    Giris:  4
            10 20 30 40
            30
    Cixis:  2
"""

n = int(input())
kortec = tuple(map(int, input().split()))
x = int(input())

netice = -1
for i in range(len(kortec)):
    if kortec[i] == x:
        netice = i
        break

print(netice)
