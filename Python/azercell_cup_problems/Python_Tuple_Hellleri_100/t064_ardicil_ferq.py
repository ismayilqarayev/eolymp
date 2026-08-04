"""
Sual 64: Kortecdeki butun ardicil cutlerin (i, i+1) ferqini yeni kortecde saxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Ardicil ferqler.

Numune:
    Giris:  4
            1 3 6 10
    Cixis:  2 3 4
"""

n = int(input())
kortec = tuple(map(int, input().split()))

netice = tuple(kortec[i + 1] - kortec[i] for i in range(len(kortec) - 1))
print(*netice)
