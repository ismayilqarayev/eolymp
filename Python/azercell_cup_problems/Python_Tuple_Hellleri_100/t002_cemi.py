"""
Sual 2: Kortecin butun elementlerinin cemini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Butun elementlerin cemi.

Numune:
    Giris:  4
            1 2 3 4
    Cixis:  10
"""

n = int(input())
kortec = tuple(map(int, input().split()))

# sum() kortec ve siyahi ustunde eyni sekilde islyir
print(sum(kortec))
