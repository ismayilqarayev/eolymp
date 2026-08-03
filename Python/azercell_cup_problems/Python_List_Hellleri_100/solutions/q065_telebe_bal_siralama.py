"""
Sual 65: N telebenin adi ve balini daxil edib bala gore azalan sirada cap edin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde her biri "ad bal" formatinda.

Cixis (Output):
    Telebeler bala gore azalan sirada, "ad bal" formatinda.

Numune:
    Giris:  2
            Ali 80
            Vusal 95
    Cixis:  Vusal 95
            Ali 80
"""

n = int(input())

telebeler = []
for _ in range(n):
    ad, bal = input().split()          # setirdeki iki sozu ayiriq
    telebeler.append((ad, int(bal)))   # (ad, bal) cutu kimi saxlayiriq

# key=lambda t: -t[1] -- balı esas goturub azalan sirada siralayir
telebeler.sort(key=lambda t: -t[1])

for ad, bal in telebeler:
    print(ad, bal)
