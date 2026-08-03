"""
Sual 73: En uzun artan alt-ardicilligin (LIS) uzunlugunu Dinamik
Proqramlasdirma (DP) ile tapin.

Fərq: burada elementler bitisik olmaya biler (araligi kesile biler),
sadece nisbi sira ve artma sertine emel olunmalidir.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    En uzun artan alt-ardicilligin uzunlugu.

Numune:
    Giris:  8
            10 9 2 5 3 7 101 18
    Cixis:  4   (meselen: 2, 5, 7, 101 -- yaxud 2, 3, 7, 18)

Alqoritmin izahi:
    dp[i] = i-ci elementle biten en uzun artan alt-ardicilligin uzunlugu.
    Her i ucun ondan evvelki butun j (j<i) elementlerini yoxlayiriq:
    eger arr[j] < arr[i] olarsa, dp[i]-ni dp[j]+1 ile boyutmek mumkundur.
    Bu O(N^2) mürəkkəbliyindədir.
"""

n = int(input())
arr = list(map(int, input().split()))

dp = [1] * n  # her element tekbasina uzunluq-1 zencir teskil edir

for i in range(n):
    for j in range(i):
        if arr[j] < arr[i]:
            # arr[j]-den arr[i]-e kecid mumkundursa, dp[i]-ni yenileyiriq
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp) if dp else 0)
