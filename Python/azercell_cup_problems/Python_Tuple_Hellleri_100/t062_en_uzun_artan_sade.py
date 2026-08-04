"""
Sual 62: Kortecde en uzun artan ardicilligin uzunlugunu (sade usulla) tapin.

Bitisik (yaninda) artan elementler zenciri ucundur.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    En uzun bitisik artan zencirin uzunlugu.

Numune:
    Giris:  6
            10 9 2 5 3 4
    Cixis:  2
"""

n = int(input())
kortec = tuple(map(int, input().split()))

en_uzun = 1
cari = 1
for i in range(1, len(kortec)):
    if kortec[i] > kortec[i - 1]:
        cari += 1
        en_uzun = max(en_uzun, cari)
    else:
        cari = 1

print(en_uzun)
