"""
Sual 89: 'Trapping rain water' -- verilmis divar hundurlukleri arasinda
yagis suyunun tutula bilecek miqdarini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (divar hundurlukleri).

Cixis (Output):
    Tutula bilen umumi su miqdari.

Numune:
    Giris:  12
            0 1 0 2 1 0 1 3 2 1 2 1
    Cixis:  6

Alqoritmin izahi:
    Her indeksde tutula bilen su, o indeksin solundaki en boyuk divar ile
    sagindaki en boyuk divardan KICIK olanindan, o indeksdeki divarin
    hundurlugunu cixmaqla tapilir:
        su[i] = min(sol_max[i], sag_max[i]) - h[i]
    Evvelce her indeks ucun "sola qeder maksimum" ve "saga qeder maksimum"
    massivlerini hesablayiriq, sonra duzstunu tetbiq edirik.
"""

n = int(input())
h = list(map(int, input().split()))

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
