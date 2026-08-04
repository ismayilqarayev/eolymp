"""
Sual 34: Iki siralanmis kortecı birlesdirib siralanmis netice (kortec) cixarin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (siralanmis).
    3-cu setirde M.
    4-cu setirde M eded (siralanmis).

Cixis (Output):
    Birlesmis siralanmis kortec.

Numune:
    Giris:  3
            1 3 5
            3
            2 4 6
    Cixis:  1 2 3 4 5 6
"""

n = int(input())
a = tuple(map(int, input().split()))
m = int(input())
b = tuple(map(int, input().split()))

i = j = 0
muveqqeti = []
while i < len(a) and j < len(b):
    if a[i] <= b[j]:
        muveqqeti.append(a[i]); i += 1
    else:
        muveqqeti.append(b[j]); j += 1
muveqqeti.extend(a[i:])
muveqqeti.extend(b[j:])

netice = tuple(muveqqeti)
print(*netice)
