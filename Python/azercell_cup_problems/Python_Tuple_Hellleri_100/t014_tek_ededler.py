"""
Sual 14: Kortecdeki butun tek ededleri cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Deyeri tek olan elementler.

Numune:
    Giris:  6
            1 2 3 4 5 6
    Cixis:  1 3 5
"""

n = int(input())
kortec = tuple(map(int, input().split()))

netice = tuple(x for x in kortec if x % 2 != 0)

print(*netice)
