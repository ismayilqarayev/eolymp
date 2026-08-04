"""
Sual 86: Kortecin butun permutasiyalarini rekursiya ile cap edin (her
permutasiya kortec kimi gosterilsin).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (ferqli).

Cixis (Output):
    Butun permutasiyalar, her biri ayri setirde.

Numune:
    Giris:  3
            1 2 3
    Cixis:  1 2 3
            1 3 2
            2 1 3
            2 3 1
            3 1 2
            3 2 1
"""


def permutasiyalar(kortec, cari=()):
    if not kortec:
        print(*cari)
        return

    for i in range(len(kortec)):
        # kortec[:i] + kortec[i+1:] -- i-ci elementi cixarilmis qalan kortec
        # cari + (kortec[i],) -- cari korteye bu elementi elave edirik
        permutasiyalar(kortec[:i] + kortec[i + 1:], cari + (kortec[i],))


n = int(input())
kortec = tuple(map(int, input().split()))
permutasiyalar(kortec)
