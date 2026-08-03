"""
Sual 75: Iki siyahi arasinda en uzun ortaq alt-ardicilligi (LCS) DP ile tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (birinci siyahi).
    3-cu setirde M.
    4-cu setirde M eded (ikinci siyahi).

Cixis (Output):
    LCS-in uzunlugu (element sayi).

Numune:
    Giris:  4
            1 2 3 4
            4
            2 4 3 1
    Cixis:  2   (meselen: 2, 4 -- yaxud 2, 3)

Alqoritmin izahi:
    dp[i][j] = a-nin ilk i elementi ile b-nin ilk j elementi arasindaki LCS uzunlugu.
    Eger a[i-1] == b[j-1] olarsa, bu element LCS-e daxil edilir: dp[i][j] = dp[i-1][j-1] + 1.
    Eks halda, iki secimden (bir elementi atmaq) daha boyuk olani gotururuk:
    dp[i][j] = max(dp[i-1][j], dp[i][j-1]).
"""

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

# (n+1) x (m+1) olculu DP cedveli, bos siyahi hallari ucun 0-lar sirasi/sutunu ile
dp = [[0] * (m + 1) for _ in range(n + 1)]

for i in range(1, n + 1):
    for j in range(1, m + 1):
        if a[i - 1] == b[j - 1]:
            dp[i][j] = dp[i - 1][j - 1] + 1
        else:
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

print(dp[n][m])
