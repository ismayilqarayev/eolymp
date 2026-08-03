"""
Sual 51: Iki siyahinin ferqini (A-da olub B-de olmayan elementler) tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (A siyahisi).
    3-cu setirde M.
    4-cu setirde M eded (B siyahisi).

Cixis (Output):
    A-da olan, lakin B-de olmayan elementler.

Numune:
    Giris:  4
            1 2 3 4
            2
            2 4
    Cixis:  1 3
"""

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

# A siyahisindaki her elementi B-de olub-olmadigina gore filtrleyirik
netice = [x for x in a if x not in b]

print(*netice)
