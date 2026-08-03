"""
Sual 69: Siyahidan nece ededin sade oldugunu tapin.

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
    """Verilmis ededin sade olub-olmadigini yoxlayir."""
    if x < 2:
        return False
    for i in range(2, int(x ** 0.5) + 1):
        if x % i == 0:
            return False
    return True


n = int(input())
arr = list(map(int, input().split()))

# sum(1 for x in arr if sadedir(x)) -- her sade ededde 1 elave edir, netice sayı verir
say = sum(1 for x in arr if sadedir(x))

print(say)
