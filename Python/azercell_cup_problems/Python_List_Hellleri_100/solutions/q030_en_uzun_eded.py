"""
Sual 30: Siyahidaki en uzun ededi (reqem sayina gore) tapin.

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
arr = list(map(int, input().split()))

# Basланgic olaraq ilk elementi en uzun kimi qebul edirik
en_uzun = arr[0]

for x in arr:
    # abs(x) -- menfi ededlerde "-" isaresi reqem sayilmasin deye
    # str(...) -- ededi setire cevirib len() ile reqem sayini olcuruk
    if len(str(abs(x))) > len(str(abs(en_uzun))):
        en_uzun = x

print(en_uzun)
