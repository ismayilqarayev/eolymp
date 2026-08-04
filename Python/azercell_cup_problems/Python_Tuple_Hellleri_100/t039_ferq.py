"""
Sual 39: Iki kortecın ferqini (A-da olub B-de olmayan) tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde M.
    4-cu setirde M eded.

Cixis (Output):
    Ferq.

Numune:
    Giris:  4
            1 2 3 4
            2
            2 4
    Cixis:  1 3
"""

n = int(input())
a = tuple(map(int, input().split()))
m = int(input())
b = tuple(map(int, input().split()))

netice = tuple(x for x in a if x not in b)
print(*netice)
