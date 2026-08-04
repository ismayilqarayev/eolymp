"""
Sual 97: N eded (tapsiriq, vaxt) kortecini daxil edib, iki eyni prosessor
arasinda minimum makespani tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Minimum makespan.

Numune:
    Giris:  4
            4 5 6 7
    Cixis:  11
"""

n = int(input())
vaxtlar = tuple(map(int, input().split()))
cem = sum(vaxtlar)

dp = [False] * (cem + 1)
dp[0] = True
for v in vaxtlar:
    for s in range(cem, v - 1, -1):
        if dp[s - v]:
            dp[s] = True

en_yaxin = 0
for s in range(cem // 2, -1, -1):
    if dp[s]:
        en_yaxin = s
        break

print(max(en_yaxin, cem - en_yaxin))
