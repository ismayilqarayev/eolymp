"""
Sual 40: Matrisin bas diaqonalinin cemini tapin.

Giris (Input):
    1-ci setirde N (matris NxN olculudur).
    Sonrakı N setirde her biri N eded.

Cixis (Output):
    Bas diaqonalin (yuxari-sol -> asagi-sag) elementlerinin cemi.

Numune:
    Giris:  2
            1 2
            3 4
    Cixis:  5
"""

n = int(input())
matris = [list(map(int, input().split())) for _ in range(n)]

# Bas diaqonalda setir ve sutun indeksleri eynidir: matris[0][0], matris[1][1], ...
cem = sum(matris[i][i] for i in range(n))

print(cem)
