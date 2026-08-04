"""
Sual 90: Kortec seklinde verilmis massivde Next Greater Element-i stack ile tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Her element ucun NGE (yoxdursa -1).

Numune:
    Giris:  4
            4 5 2 10
    Cixis:  5 10 10 -1
"""

n = int(input())
kortec = tuple(map(int, input().split()))

netice = [-1] * n
yigin = []
for i in range(n):
    while yigin and kortec[yigin[-1]] < kortec[i]:
        idx = yigin.pop()
        netice[idx] = kortec[i]
    yigin.append(i)

print(*tuple(netice))
