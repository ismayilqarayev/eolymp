"""
Sual 41: Matrisin eks diaqonalinin cemini tapin.

Giris (Input):
    1-ci setirde N (matris NxN olculudur).
    Sonrakı N setirde her biri N eded.

Cixis (Output):
    Eks diaqonalin (yuxari-sag -> asagi-sol) elementlerinin cemi.

Numune:
    Giris:  2
            1 2
            3 4
    Cixis:  4
"""

n = int(input())
matris = [list(map(int, input().split())) for _ in range(n)]

# Eks diaqonalda sutun indeksi = n-1-setir_indeksi: matris[0][n-1], matris[1][n-2], ...
cem = sum(matris[i][n - 1 - i] for i in range(n))

print(cem)
