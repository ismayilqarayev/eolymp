"""
Sual 46: N telebenin (ad, fenn, bal) kortecini daxil edib, bali 90-dan yuxari
olanlari cap edin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "ad fenn bal".

Cixis (Output):
    Uygun setirler.

Numune:
    Giris:  2
            Ali Riyaziyyat 95
            Vusal Fizika 80
    Cixis:  Ali Riyaziyyat 95
"""

n = int(input())
for _ in range(n):
    ad, fenn, bal = input().split()
    bal = int(bal)
    if bal > 90:
        print(ad, fenn, bal)
