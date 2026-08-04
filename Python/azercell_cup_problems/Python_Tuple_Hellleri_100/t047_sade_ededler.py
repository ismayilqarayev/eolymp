"""
Sual 47: Kortecden yalniz sade ededleri cixarib yeni kortec yaradin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Sade elementler.

Numune:
    Giris:  6
            2 3 4 5 6 7
    Cixis:  2 3 5 7
"""


def sadedir(x):
    if x < 2:
        return False
    for i in range(2, int(x ** 0.5) + 1):
        if x % i == 0:
            return False
    return True


n = int(input())
kortec = tuple(map(int, input().split()))

netice = tuple(x for x in kortec if sadedir(x))
print(*netice)
