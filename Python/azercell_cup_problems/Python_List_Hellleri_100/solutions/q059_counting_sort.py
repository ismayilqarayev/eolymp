"""
Sual 59: Elementleri counting sort ile siralayin (deyerler 0-100 araligindadir).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (0-100 araliginda).

Cixis (Output):
    Artan sirada siralanmis siyahi.

Numune:
    Giris:  5
            4 2 2 8 3
    Cixis:  2 2 3 4 8

Alqoritmin izahi:
    Muqayiseye esaslanan siralama deyil -- her mumkun deyer ucun sayğac
    (counter) saxlayiriq. Sonra sayğaclari ardicil gezib, her deyeri
    ne qeder tekrarlandigina gore neticeye yaziriq. Deyer araligi
    mehdud oldugunda (0-100) bu O(N + deyer_araligi) muddetinde islyir.
"""

n = int(input())
arr = list(map(int, input().split()))

# 0-dan 100-e qeder her deyerin nece defe rast gelmesini saxlayan sayğac massivi
sayac = [0] * 101
for x in arr:
    sayac[x] += 1

netice = []
for deyer in range(101):
    # Bu deyer sayac[deyer] defe tekrarlanib, onu o qeder defe neticeye elave edirik
    netice.extend([deyer] * sayac[deyer])

print(*netice)
