"""
Sual 26: Kortecin artan sirada olub-olmadigini yoxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    "Beli" / "Xeyr".

Numune:
    Giris:  4
            1 3 5 7
    Cixis:  Beli
"""

n = int(input())
kortec = tuple(map(int, input().split()))

artandir = all(kortec[i] <= kortec[i + 1] for i in range(len(kortec) - 1))
print("Beli" if artandir else "Xeyr")
