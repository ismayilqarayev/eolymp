"""
Sual 50: Iki siyahinin birlesmesini (union) tapin (tekrarsiz).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde M.
    4-cu setirde M eded.

Cixis (Output):
    Her iki siyahidaki butun unikal elementler.

Numune:
    Giris:  3
            1 2 3
            3
            2 3 4
    Cixis:  1 2 3 4
"""

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

netice = []
# a+b -- iki siyahini ardicil gezmek ucun birlesdiririk
for x in a + b:
    if x not in netice:
        netice.append(x)

print(*netice)
