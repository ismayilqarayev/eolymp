"""
Sual 43: Kortecdeki ededleri cut/tek olaraq iki ayri korteye bolun.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    1-ci setirde cutler, 2-ci setirde tekler.

Numune:
    Giris:  5
            1 2 3 4 5
    Cixis:  2 4
            1 3 5
"""

n = int(input())
kortec = tuple(map(int, input().split()))

cutler = tuple(x for x in kortec if x % 2 == 0)
tekler = tuple(x for x in kortec if x % 2 != 0)

print(*cutler)
print(*tekler)
