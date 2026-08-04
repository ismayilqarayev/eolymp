"""
Sual 21: Kortecin elementlerinin arifmetik ortasini hesablayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Orta qiymet, 2 onluq reqemle.

Numune:
    Giris:  4
            1 2 3 4
    Cixis:  2.50
"""

n = int(input())
kortec = tuple(map(int, input().split()))

orta = sum(kortec) / len(kortec)
print(f"{orta:.2f}")
