"""
Sual 47: Siyahidan yalniz sade ededleri cixarin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Sade olan elementler.

Numune:
    Giris:  6
            2 3 4 5 6 7
    Cixis:  2 3 5 7
"""


def sadedir(x):
    """Verilmis ededin sade olub-olmadigini yoxlayir."""
    if x < 2:
        return False
    # Yalniz kvadrat koke qeder yoxlamaq kifayetdir (2-den sqrt(x)-e qeder)
    for i in range(2, int(x ** 0.5) + 1):
        if x % i == 0:
            return False  # bolunen tapildi, demeli sade deyil
    return True


n = int(input())
arr = list(map(int, input().split()))

print(*[x for x in arr if sadedir(x)])
