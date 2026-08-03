"""
Sual 7: Siyahinin cut indeksli elementlerini cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Indeksi cut olan elementler (0, 2, 4, ...).

Numune:
    Giris:  5
            10 20 30 40 50
    Cixis:  10 30 50
"""

n = int(input())
arr = list(map(int, input().split()))

# range(0, n, 2) -> 0-dan basleyib 2-ser addim atir: 0, 2, 4, ...
# Bu list comprehension her cut indeksdeki elementi secir
netice = [arr[i] for i in range(0, n, 2)]

print(*netice)
