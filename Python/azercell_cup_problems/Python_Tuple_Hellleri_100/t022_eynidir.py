"""
Sual 22: Iki kortecın eyni olub-olmadigini yoxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde M.
    4-cu setirde M eded.

Cixis (Output):
    "Beli" / "Xeyr".

Numune:
    Giris:  3
            1 2 3
            3
            1 2 3
    Cixis:  Beli
"""

n = int(input())
a = tuple(map(int, input().split()))
m = int(input())
b = tuple(map(int, input().split()))

# Kortecler == operatoru ile birbasa muqayise oluna biler (hem uzunluq, hem sira nezere alinir)
print("Beli" if a == b else "Xeyr")
