"""
Sual 88: N eded (tarix, meblegh) emeliyyat kortecini daxil edib, tarixe gore
siralayib kumulyativ balansi cap edin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "tarix meblegh".

Cixis (Output):
    Tarixe gore sirali balans.

Numune:
    Giris:  3
            2 100
            1 50
            3 -30
    Cixis:  50
            150
            120
"""

n = int(input())

emeliyyatlar = []
for _ in range(n):
    emeliyyat = tuple(map(int, input().split()))
    emeliyyatlar.append(emeliyyat)

emeliyyatlar.sort(key=lambda e: e[0])   # tarixe gore siralayiriq

balans = 0
for tarix, meblegh in emeliyyatlar:
    balans += meblegh
    print(balans)
