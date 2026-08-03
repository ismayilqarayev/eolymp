"""
Sual 49: Iki siyahinin kesismesini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde M.
    4-cu setirde M eded.

Cixis (Output):
    Her iki siyahida movcud olan (ortaq) elementler, tekrarsiz.

Numune:
    Giris:  4
            1 2 3 4
            3
            2 4 5
    Cixis:  2 4
"""

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

netice = []
for x in a:
    # x hem b siyahisinda olmali, hem de netice-de artiq elave edilmemis olmalidir
    if x in b and x not in netice:
        netice.append(x)

print(*netice)
