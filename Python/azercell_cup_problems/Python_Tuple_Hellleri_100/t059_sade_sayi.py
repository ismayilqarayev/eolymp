"""
Sual 59: Kortecden nece ededin sade oldugunu tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Sade ededlerin sayi.

Numune:
    Giris:  6
            2 4 5 6 7 9
    Cixis:  3
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

say = sum(1 for x in kortec if sadedir(x))
print(say)
