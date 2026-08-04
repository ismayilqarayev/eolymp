"""
Sual 37: Iki kortecın kesismesini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde M.
    4-cu setirde M eded.

Cixis (Output):
    Ortaq elementler.

Numune:
    Giris:  4
            1 2 3 4
            3
            2 4 5
    Cixis:  2 4
"""

n = int(input())
a = tuple(map(int, input().split()))
m = int(input())
b = tuple(map(int, input().split()))

netice = []
for x in a:
    if x in b and x not in netice:
        netice.append(x)

print(*tuple(netice))
