"""
Sual 56: Kortecdeki elementlerin ikili (binary) gorunusunu yeni kortecde saxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Her ededin binary formasi.

Numune:
    Giris:  3
            2 5 7
    Cixis:  10 101 111
"""

n = int(input())
kortec = tuple(map(int, input().split()))

netice = tuple(bin(x)[2:] for x in kortec)
print(*netice)
