"""
Sual 52: N eded (ad, telefon) kortecini daxil edib, adlara gore elifba sirasi
ile cap edin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "ad telefon".

Cixis (Output):
    Adina gore siralanmis siyahi.

Numune:
    Giris:  2
            Vusal 555
            Ali 111
    Cixis:  Ali 111
            Vusal 555
"""

n = int(input())

qeydler = []
for _ in range(n):
    ad, telefon = input().split()
    qeydler.append((ad, telefon))

qeydler.sort(key=lambda t: t[0])   # ad (indeks 0) uzre elifba sirasi

for ad, telefon in qeydler:
    print(ad, telefon)
