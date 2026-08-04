"""
Sual 38: Iki kortecın birlesmesini (tekrarsiz) tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde M.
    4-cu setirde M eded.

Cixis (Output):
    Butun unikal elementler.

Numune:
    Giris:  3
            1 2 3
            3
            2 3 4
    Cixis:  1 2 3 4
"""

n = int(input())
a = tuple(map(int, input().split()))
m = int(input())
b = tuple(map(int, input().split()))

netice = []
for x in a + b:
    if x not in netice:
        netice.append(x)

print(*tuple(netice))
