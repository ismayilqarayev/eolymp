"""
Sual 75: Iki kortec arasinda en uzun ortaq alt-ardicilligi (LCS) DP ile tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde M.
    4-cu setirde M eded.

Cixis (Output):
    LCS uzunlugu.

Numune:
    Giris:  4
            1 2 3 4
            4
            2 4 3 1
    Cixis:  2
"""

n = int(input())
a = tuple(map(int, input().split()))
m = int(input())
b = tuple(map(int, input().split()))

dp = [[0] * (m + 1) for _ in range(n + 1)]
for i in range(1, n + 1):
    for j in range(1, m + 1):
        if a[i - 1] == b[j - 1]:
            dp[i][j] = dp[i - 1][j - 1] + 1
        else:
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

print(dp[n][m])
