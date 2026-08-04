"""
Sual 89: 'Trapping rain water' meselesini kortec seklinde verilmis divar
hunduruklukleri ucun hell edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Tutula bilen su miqdari.

Numune:
    Giris:  12
            0 1 0 2 1 0 1 3 2 1 2 1
    Cixis:  6
"""

n = int(input())
h = tuple(map(int, input().split()))

sol_max = [0] * n
sag_max = [0] * n

sol_max[0] = h[0]
for i in range(1, n):
    sol_max[i] = max(sol_max[i - 1], h[i])

sag_max[n - 1] = h[n - 1]
for i in range(n - 2, -1, -1):
    sag_max[i] = max(sag_max[i + 1], h[i])

su = 0
for i in range(n):
    su += min(sol_max[i], sag_max[i]) - h[i]

print(su)
