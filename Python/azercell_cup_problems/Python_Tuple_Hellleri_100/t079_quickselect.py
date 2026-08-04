"""
Sual 79: Kortecde K-cı en boyuk elementi quickselect alqoritmi ile tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde K.

Cixis (Output):
    K-cı en boyuk.

Numune:
    Giris:  6
            3 2 1 5 6 4
            2
    Cixis:  5
"""

import random


def quickselect(kortec, k):
    if len(kortec) == 1:
        return kortec[0]

    pivot = random.choice(kortec)
    boyukler = tuple(x for x in kortec if x > pivot)
    beraberler = tuple(x for x in kortec if x == pivot)
    kicikler = tuple(x for x in kortec if x < pivot)

    if k <= len(boyukler):
        return quickselect(boyukler, k)
    elif k <= len(boyukler) + len(beraberler):
        return pivot
    else:
        return quickselect(kicikler, k - len(boyukler) - len(beraberler))


n = int(input())
kortec = tuple(map(int, input().split()))
k = int(input())
print(quickselect(kortec, k))
