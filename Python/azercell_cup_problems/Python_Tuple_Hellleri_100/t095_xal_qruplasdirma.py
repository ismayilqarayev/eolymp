"""
Sual 95: N eded (oyunçu, xal) kortecini daxil edib, xallari beraber olan
oyunculari qruplasdirib cap edin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "oyunçu xal".

Cixis (Output):
    Her unikal xal ucun oyuncular bir setirde.

Numune:
    Giris:  3
            Ali 80
            Vusal 80
            Elvin 90
    Cixis:  80: Ali Vusal
            90: Elvin
"""

n = int(input())

qruplar = {}
sira = []
for _ in range(n):
    ad, xal = input().split()
    xal = int(xal)
    if xal not in qruplar:
        qruplar[xal] = []
        sira.append(xal)
    qruplar[xal].append(ad)

for xal in sira:
    print(f"{xal}: " + " ".join(qruplar[xal]))
