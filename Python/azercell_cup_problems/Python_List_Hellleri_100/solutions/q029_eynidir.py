"""
Sual 29: Iki siyahinin eyni olub-olmadigini yoxlayin (sira onemli deyil).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde M.
    4-cu setirde M eded.

Cixis (Output):
    "Beli" - eger her iki siyahida eyni elementler (eyni sayda) varsa, eks halda "Xeyr".

Numune:
    Giris:  3
            1 2 3
            3
            3 2 1
    Cixis:  Beli
"""

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

# Her iki siyahini siralayib muqayise etmek sиranin onemini aradan qaldirir
# Eger siralanmis versiyalari eynidirse, orijinal siyahilar "eyni elementlere" malikdir
print("Beli" if sorted(a) == sorted(b) else "Xeyr")
