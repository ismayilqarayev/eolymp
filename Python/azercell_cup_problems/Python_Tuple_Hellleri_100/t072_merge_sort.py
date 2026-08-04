"""
Sual 72: Kortecdeki elementleri Merge Sort ile rekursiya vasitesile siralayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Siralanmis kortec.

Numune:
    Giris:  5
            5 3 8 1 9
    Cixis:  1 3 5 8 9
"""


def merge(a, b):
    netice = []
    i = j = 0
    while i < len(a) and j < len(b):
        if a[i] <= b[j]:
            netice.append(a[i]); i += 1
        else:
            netice.append(b[j]); j += 1
    netice.extend(a[i:])
    netice.extend(b[j:])
    return tuple(netice)


def merge_sort(kortec):
    if len(kortec) <= 1:
        return kortec

    orta = len(kortec) // 2
    sol = merge_sort(kortec[:orta])
    sag = merge_sort(kortec[orta:])
    return merge(sol, sag)


n = int(input())
kortec = tuple(map(int, input().split()))
print(*merge_sort(kortec))
