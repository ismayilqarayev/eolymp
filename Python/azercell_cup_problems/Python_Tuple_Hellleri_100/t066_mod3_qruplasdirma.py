"""
Sual 66: Kortecdeki elementleri mod 3-e gore (0, 1, 2 qaliqlari) qruplasdirin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    3 setirde her qrup.

Numune:
    Giris:  6
            1 2 3 4 5 6
    Cixis:  3 6
            1 4
            2 5
"""

n = int(input())
kortec = tuple(map(int, input().split()))

qrup0 = tuple(x for x in kortec if x % 3 == 0)
qrup1 = tuple(x for x in kortec if x % 3 == 1)
qrup2 = tuple(x for x in kortec if x % 3 == 2)

print(*qrup0)
print(*qrup1)
print(*qrup2)
