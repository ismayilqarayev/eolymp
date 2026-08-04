"""
Sual 33: Kortecde binary search usulu ile eded axtarin (kortec siralanmis olmalidir).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (artan sirada).
    3-cu setirde axtarilan eded.

Cixis (Output):
    Indeks (tapilmasa -1).

Numune:
    Giris:  5
            1 3 5 7 9
            7
    Cixis:  3
"""

n = int(input())
kortec = tuple(map(int, input().split()))
x = int(input())

lo, hi = 0, len(kortec) - 1
netice = -1
while lo <= hi:
    mid = (lo + hi) // 2
    if kortec[mid] == x:
        netice = mid
        break
    elif kortec[mid] < x:
        lo = mid + 1
    else:
        hi = mid - 1

print(netice)
