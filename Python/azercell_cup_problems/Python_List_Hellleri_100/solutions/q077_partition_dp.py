"""
Sual 77: Siyahini ele bolun ki, iki hissenin cem ferqi minimum olsun
(partition problem, DP ile).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Iki hissenin cemleri arasindaki minimum mumkun ferq.

Numune:
    Giris:  4
            1 6 11 5
    Cixis:  1   (hisseler: {1,5,6}=12 ve {11}=11, ferq=1)

Alqoritmin izahi:
    Bu, "subset sum" meselesinin bir tetbiqidir. Umumi cemin yarisina
    (ve ya ona en yaxin) beraber olan alt-coxlugu tapmaga calisiriq.
    dp[s] = True, eger cemi s olan bir alt-coxluq movcudsdursa.
    Bu klassik 0/1 Knapsack DP-nin bool versiyasidir.
"""

n = int(input())
arr = list(map(int, input().split()))
cem = sum(arr)

# dp[s] -- cemi s olan alt-coxluq qurmaq mumkundurmu?
dp = [False] * (cem + 1)
dp[0] = True  # bos alt-coxlugun cemi hemise 0-dir

for x in arr:
    # Geriden (yuxaridan) asagi dogru gedirik ki, her elementi yalniz bir defe istifade edek
    for s in range(cem, x - 1, -1):
        if dp[s - x]:
            dp[s] = True

# cem//2-den asagi (0-a dogru) axtararaq mumkun olan en boyuk "yarim cemi" tapiriq
en_yaxin = 0
for s in range(cem // 2, -1, -1):
    if dp[s]:
        en_yaxin = s
        break

# Ferq = umumi cem - 2*(en yaxin yarim cem)
print(cem - 2 * en_yaxin)
