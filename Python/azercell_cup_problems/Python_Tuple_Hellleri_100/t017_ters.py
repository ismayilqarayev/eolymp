"""
Sual 17: Kortecin tersine cevrilmis (reversed) versiyasini cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Ters sirada kortec.

Numune:
    Giris:  4
            1 2 3 4
    Cixis:  4 3 2 1
"""

n = int(input())
kortec = tuple(map(int, input().split()))

# [::-1] slicing -- kortecin tersine cevrilmis yeni versiyasini yaradir
netice = kortec[::-1]

print(*netice)
