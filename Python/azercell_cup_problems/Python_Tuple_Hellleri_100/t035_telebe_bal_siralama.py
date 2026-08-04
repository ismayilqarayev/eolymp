"""
Sual 35: N telebenin (ad, bal) kortecini daxil edib, bala gore azalan sirada cap edin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "ad bal".

Cixis (Output):
    Telebeler bala gore azalan sirada.

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
    ad, bal = input().split()
    telebeler.append((ad, int(bal)))   # her telebe (ad, bal) kortecidir

telebeler.sort(key=lambda t: -t[1])

for ad, bal in telebeler:
    print(ad, bal)
