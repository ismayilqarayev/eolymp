"""
Sual 20: Kortecin ortancil elementini cap edin (indeks uzre).

Giris (Input):
    1-ci setirde N (tek eded).
    2-ci setirde N eded.

Cixis (Output):
    Ortada yerlesen element.

Numune:
    Giris:  5
            1 2 3 4 5
    Cixis:  3
"""

n = int(input())
kortec = tuple(map(int, input().split()))

print(kortec[n // 2])
