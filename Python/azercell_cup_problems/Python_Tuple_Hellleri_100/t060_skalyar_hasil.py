"""
Sual 60: Iki kortecin skalyar hasilini (dot product) hesablayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde N eded.

Cixis (Output):
    Skalyar hasil.

Numune:
    Giris:  3
            1 2 3
            4 5 6
    Cixis:  32
"""

n = int(input())
a = tuple(map(int, input().split()))
b = tuple(map(int, input().split()))

netice = sum(a[i] * b[i] for i in range(n))
print(netice)
