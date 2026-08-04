"""
Sual 58: N eded (sehir, ehali) kortecini daxil edib, ehaliye gore azalan
sirada cap edin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "sehir ehali".

Cixis (Output):
    Ehaliye gore azalan sirada.

Numune:
    Giris:  2
            Baki 2000000
            Gence 300000
    Cixis:  Baki 2000000
            Gence 300000
"""

n = int(input())

sehirler = []
for _ in range(n):
    sehir, ehali = input().split()
    sehirler.append((sehir, int(ehali)))

sehirler.sort(key=lambda t: -t[1])

for sehir, ehali in sehirler:
    print(sehir, ehali)
