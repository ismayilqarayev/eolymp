"""
Sual 65: Verilmis kortec cutlerini (a, b) daxil edib, a+b ceminə gore siralayin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "a b".

Cixis (Output):
    Cemine gore artan sirada "a b" cutleri.

Numune:
    Giris:  3
            1 5
            2 2
            0 1
    Cixis:  0 1
            2 2
            1 5
"""

n = int(input())

cutler = []
for _ in range(n):
    cut = tuple(map(int, input().split()))
    cutler.append(cut)

cutler.sort(key=lambda c: c[0] + c[1])

for a, b in cutler:
    print(a, b)
