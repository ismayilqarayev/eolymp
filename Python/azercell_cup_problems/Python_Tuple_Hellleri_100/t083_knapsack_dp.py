"""
Sual 83: N eded (esya, cəki, deyer) kortecini daxil edib, 0/1 Knapsack
meselesini DP ile hell edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde tutum W.
    Sonrakı N setirde "esya cəki deyer".

Cixis (Output):
    Maksimum deyer.

Numune:
    Giris:  3
            10
            A 1 1
            B 3 4
            C 4 5
    Cixis:  10
"""

n = int(input())
w = int(input())

esyalar = []
for _ in range(n):
    ad, ceki, deyer = input().split()
    esyalar.append((ad, int(ceki), int(deyer)))   # (ad, cəki, deyer) kortecidir

dp = [0] * (w + 1)
for ad, ceki, deyer in esyalar:
    for cap in range(w, ceki - 1, -1):
        dp[cap] = max(dp[cap], dp[cap - ceki] + deyer)

print(dp[w])
