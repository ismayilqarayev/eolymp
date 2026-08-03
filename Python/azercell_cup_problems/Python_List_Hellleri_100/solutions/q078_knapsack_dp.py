"""
Sual 78: 0/1 Knapsack (rukzak) meselesini DP ile hell edin.

Giris (Input):
    1-ci setirde N (eшya sayi).
    2-ci setirde tutum W.
    Sonrakı N setirde her biri "cəki dəyər".

Cixis (Output):
    Tutuma sığan esyalarin maksimum umumi deyeri.

Numune:
    Giris:  3
            10
            1 1
            3 4
            4 5
    Cixis:  10   (butun esyalar sığır: 1+3+4=8<=10, deyer 1+4+5=10)

Alqoritmin izahi:
    dp[cap] = tutumu "cap" olan rukzaga qoyula bilecek maksimum deyer.
    Her esya ucun (0/1 -- ya gotururuk, ya yox) tutumu boyukden kicige
    dogru gezerek, esyani goturmekle (dp[cap-cəki]+dəyər) ve
    goturmemekle (dp[cap]) arasinda daha boyuyunu seciriz.
    Geriden gezmek her esyani yalniz BIR DEFE hesaba qatmagi temin edir.
"""

n = int(input())
w = int(input())

cekiler = []
deyerler = []
for _ in range(n):
    c, d = map(int, input().split())
    cekiler.append(c)
    deyerler.append(d)

dp = [0] * (w + 1)  # dp[cap] -- tutumu cap olan cantaya qoyula bilecek maks. deyer

for i in range(n):
    # cap-i boyukden esyanin cekisine qeder azaldaraq gezmek "0/1" (tek defe) semantikasini saxlayir
    for cap in range(w, cekiler[i] - 1, -1):
        dp[cap] = max(dp[cap], dp[cap - cekiler[i]] + deyerler[i])

print(dp[w])
