"""
Sual 91: N eded (ad, dogum ili) kortecini daxil edib, cari il esasinda en
yasli ve en gencs sexsi tapin.

Giris (Input):
    1-ci setirde cari il.
    2-ci setirde N.
    Sonrakı N setirde "ad dogum_ili".

Cixis (Output):
    "en_yasli en_genc".

Numune:
    Giris:  2026
            2
            Ali 1990
            Vusal 2005
    Cixis:  Ali Vusal
"""

cari_il = int(input())
n = int(input())

sexsler = []
for _ in range(n):
    ad, il = input().split()
    yas = cari_il - int(il)
    sexsler.append((ad, yas))

en_yasli = sexsler[0]
en_genc = sexsler[0]
for sexs in sexsler:
    if sexs[1] > en_yasli[1]:
        en_yasli = sexs
    if sexs[1] < en_genc[1]:
        en_genc = sexs

print(en_yasli[0], en_genc[0])
