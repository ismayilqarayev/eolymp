"""
Sual 45: Ic-ice kortecleri daxil edib, en boyuk (nested) deyeri tapin.

Giris (Input):
    1-ci setirde N (xarici kortec olcusu).
    Sonrakı N setirde daxili kortecin elementleri (bir setirde boslugla).

Cixis (Output):
    Butun daxili elementler arasinda maksimum.

Numune:
    Giris:  2
            1 5 2
            9 3
    Cixis:  9
"""

n = int(input())

xarici = []
for _ in range(n):
    daxili = tuple(map(int, input().split()))
    xarici.append(daxili)
xarici = tuple(xarici)   # kortec-kortec (nested tuple)

en_boyuk = xarici[0][0]
for daxili in xarici:
    for x in daxili:
        if x > en_boyuk:
            en_boyuk = x

print(en_boyuk)
