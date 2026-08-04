"""
Sual 99: NxM olculu 'matris' (kortec-kortec seklinde) daxil edilib, yalniz
saga/asagi hereket ederek en boyuk cemli yolu DP ile tapin.

Giris (Input):
    1-ci setirde N, M.
    Sonrakı N setirde matris.

Cixis (Output):
    Maksimum cem.

Numune:
    Giris:  2 2
            1 2
            1 1
    Cixis:  4
"""

n, m = map(int, input().split())

matris = []
for _ in range(n):
    setir = tuple(map(int, input().split()))
    matris.append(setir)
matris = tuple(matris)

dp = [[0] * m for _ in range(n)]
dp[0][0] = matris[0][0]

for j in range(1, m):
    dp[0][j] = dp[0][j - 1] + matris[0][j]
for i in range(1, n):
    dp[i][0] = dp[i - 1][0] + matris[i][0]

for i in range(1, n):
    for j in range(1, m):
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + matris[i][j]

print(dp[n - 1][m - 1])
