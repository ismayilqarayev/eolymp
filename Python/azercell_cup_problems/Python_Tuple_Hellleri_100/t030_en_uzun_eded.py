"""
Sual 30: Kortecdeki en uzun ededi (reqem sayina gore) tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    En cox reqemi olan eded.

Numune:
    Giris:  3
            12 345 6
    Cixis:  345
"""

n = int(input())
kortec = tuple(map(int, input().split()))

en_uzun = kortec[0]
for x in kortec:
    if len(str(abs(x))) > len(str(abs(en_uzun))):
        en_uzun = x

print(en_uzun)
