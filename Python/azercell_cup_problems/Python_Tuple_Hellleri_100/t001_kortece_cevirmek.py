"""
Sual 1: N eded tam eded daxil edilir. Onlari kortece cevirib cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Kortec boslugla ayrilmis sekilde.

Numune:
    Giris:  5
            1 2 3 4 5
    Cixis:  1 2 3 4 5
"""

n = int(input())

# input().split() -- setiri boslugla boler, map(int, ...) her elementi tam edede cevirir
# tuple(...) -- neticeni dəyişməz (immutable) kortec kimi saxlayir
kortec = tuple(map(int, input().split()))

print(*kortec)
