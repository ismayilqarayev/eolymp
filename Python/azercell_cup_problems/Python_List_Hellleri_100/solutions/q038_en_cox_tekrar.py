"""
Sual 38: Siyahidaki en cox tekrarlanan elementi tapin.

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
arr = list(map(int, input().split()))

# Her ededin tezliyini hesablayiriq
tezlik = {}
for x in arr:
    tezlik[x] = tezlik.get(x, 0) + 1

# max(..., key=lambda k: tezlik[k]) -- lugatin acarlarindan tezliyi en boyuk olanini tapir
en_cox = max(tezlik, key=lambda k: tezlik[k])

print(en_cox)
