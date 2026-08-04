"""
Sual 25: Kortecin palindrom olub-olmadigini yoxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    "Beli" / "Xeyr".

Numune:
    Giris:  5
            1 2 3 2 1
    Cixis:  Beli
"""

n = int(input())
kortec = tuple(map(int, input().split()))

print("Beli" if kortec == kortec[::-1] else "Xeyr")
