"""
Sual 23: Kortecden yeni kortec yaradin: her elementi 2 defe artirin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Her element x2.

Numune:
    Giris:  3
            1 2 3
    Cixis:  2 4 6
"""

n = int(input())
kortec = tuple(map(int, input().split()))

netice = tuple(x * 2 for x in kortec)

print(*netice)
