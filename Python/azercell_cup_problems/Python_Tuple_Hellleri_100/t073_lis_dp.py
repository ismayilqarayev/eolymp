"""
Sual 73: Kortecde en uzun artan alt-ardicilligin (LIS) uzunlugunu DP ile tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    LIS uzunlugu.

Numune:
    Giris:  8
            10 9 2 5 3 7 101 18
    Cixis:  4
"""

n = int(input())
kortec = tuple(map(int, input().split()))

dp = [1] * n
for i in range(n):
    for j in range(i):
        if kortec[j] < kortec[i]:
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp) if dp else 0)
