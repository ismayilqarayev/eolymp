"""
Sual 51: Kortecdeki en cox tekrarlanan elementi tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    En cox tekrarlanan eded.

Numune:
    Giris:  5
            1 2 2 3 2
    Cixis:  2
"""

n = int(input())
kortec = tuple(map(int, input().split()))

tezlik = {}
for x in kortec:
    tezlik[x] = tezlik.get(x, 0) + 1

en_cox = max(tezlik, key=lambda k: tezlik[k])
print(en_cox)
