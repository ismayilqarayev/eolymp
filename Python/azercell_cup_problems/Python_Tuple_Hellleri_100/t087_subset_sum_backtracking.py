"""
Sual 87: Backtracking ile kortecden cemi N olan butun alt-coxluqlari (kortec)
tapin.

Giris (Input):
    1-ci setirde N (kortec olcusu).
    2-ci setirde N eded.
    3-cu setirde hedef cem.

Cixis (Output):
    Uygun alt-coxluqlar.

Numune:
    Giris:  4
            2 3 5 7
            10
    Cixis:  3 7
            2 3 5
"""


def backtrack(kortec, hedef, basla, cari, cem):
    if cem == hedef:
        print(*cari)
        return
    if cem > hedef or basla == len(kortec):
        return

    for i in range(basla, len(kortec)):
        backtrack(kortec, hedef, i + 1, cari + (kortec[i],), cem + kortec[i])


n = int(input())
kortec = tuple(map(int, input().split()))
hedef = int(input())
backtrack(kortec, hedef, 0, (), 0)
