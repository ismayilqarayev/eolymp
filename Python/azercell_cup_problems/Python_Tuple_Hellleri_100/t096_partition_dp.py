"""
Sual 96: Ededleri ele bolun ki, iki hissenin cem ferqi minimum olsun
(partition problem, DP).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Minimum ferq.

Numune:
    Giris:  4
            1 6 11 5
    Cixis:  1
"""

n = int(input())
kortec = tuple(map(int, input().split()))
cem = sum(kortec)

dp = [False] * (cem + 1)
dp[0] = True
for x in kortec:
    for s in range(cem, x - 1, -1):
        if dp[s - x]:
            dp[s] = True

en_yaxin = 0
for s in range(cem // 2, -1, -1):
    if dp[s]:
        en_yaxin = s
        break

print(cem - 2 * en_yaxin)
