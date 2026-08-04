"""
Sual 31: Siyahini korteci cevirib, sonra kortecden siyahiya geri qaytarin
(evvelkine beraber oldugunu yoxlayin).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    "Beli" (eger donusum deyismez qalibsa).

Numune:
    Giris:  3
            1 2 3
    Cixis:  Beli
"""

n = int(input())
siyahi = list(map(int, input().split()))   # evvelce siyahi kimi oxuyuruq

kortec = tuple(siyahi)     # siyahini korteye ceviririk
geri_siyahi = list(kortec) # kortecden yeniden siyahiya ceviririk

print("Beli" if siyahi == geri_siyahi else "Xeyr")
