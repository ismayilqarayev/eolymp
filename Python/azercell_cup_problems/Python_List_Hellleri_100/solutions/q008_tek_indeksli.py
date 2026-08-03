"""
Sual 8: Siyahinin tek indeksli elementlerini cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Indeksi tek olan elementler (1, 3, 5, ...).

Numune:
    Giris:  5
            10 20 30 40 50
    Cixis:  20 40
"""

n = int(input())
arr = list(map(int, input().split()))

# range(1, n, 2) -> 1-den basleyib 2-ser addim atir: 1, 3, 5, ...
netice = [arr[i] for i in range(1, n, 2)]

print(*netice)
