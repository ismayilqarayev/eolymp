"""
Sual 24: Kortecin elementlerini vergulle ayrilmis setir kimi cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    "a,b,c" formatinda.

Numune:
    Giris:  3
            1 2 3
    Cixis:  1,2,3
"""

n = int(input())
kortec = tuple(map(int, input().split()))

print(",".join(map(str, kortec)))
