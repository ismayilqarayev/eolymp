"""
Sual 50: Kortecdeki elementleri tezliyine gore azalan sirada cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    "eded:tezlik" cutleri, tezliyine gore azalan.

Numune:
    Giris:  5
            1 2 2 3 2
    Cixis:  2:3 1:1 3:1
"""

n = int(input())
kortec = tuple(map(int, input().split()))

tezlik = {}
for x in kortec:
    tezlik[x] = tezlik.get(x, 0) + 1

netice = sorted(tezlik.items(), key=lambda p: -p[1])
print(" ".join(f"{k}:{v}" for k, v in netice))
