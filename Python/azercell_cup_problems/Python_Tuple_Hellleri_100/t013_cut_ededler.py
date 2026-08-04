"""
Sual 13: Kortecdeki butun cut ededleri cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Deyeri cut olan elementler.

Numune:
    Giris:  6
            1 2 3 4 5 6
    Cixis:  2 4 6
"""

n = int(input())
kortec = tuple(map(int, input().split()))

# Generator ifadesi ile filtrleyib netice ucun yeni kortec qururuq
netice = tuple(x for x in kortec if x % 2 == 0)

print(*netice)
