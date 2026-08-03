"""
Sual 44: Matrisi 90 derece saat eqrebi istiqametinde firladin.

Giris (Input):
    1-ci setirde N (matris NxN olculudur).
    Sonrakı N setirde matris.

Cixis (Output):
    90 derece firladiılmis matris.

Numune:
    Giris:  2
            1 2
            3 4
    Cixis:  3 1
            4 2

Alqoritmin izahi:
    90 derece saat eqrebi istiqametinde firlatma ucun duzulus qaydasi:
    yeni_matris[i][j] = kohne_matris[n-1-j][i]
    Yeni sag suytunlar kohne setirlerden asagidan-yuxariya doğru gelir.
"""

n = int(input())
matris = [list(map(int, input().split())) for _ in range(n)]

firlanmis = [[matris[n - 1 - j][i] for j in range(n)] for i in range(n)]

for setir in firlanmis:
    print(*setir)
