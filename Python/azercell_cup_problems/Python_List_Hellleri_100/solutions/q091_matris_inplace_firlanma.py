"""
Sual 91: NxN matrisi in-place (elave yaddas istifade etmeden) 90 derece
saat eqrebi istiqametinde firladin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde matris.

Cixis (Output):
    90 derece firladiılmis matris.

Numune:
    Giris:  2
            1 2
            3 4
    Cixis:  3 1
            4 2

Alqoritmin izahi (iki addimda in-place firlanma):
    1) Matrisi transponirle (setirleri sutunlarla yerdeyisdir): matris[i][j] <-> matris[j][i].
    2) Her setiri ozunun icinde ters cevir (reverse).
    Bu iki addimin neticesi 90 derece saat eqrebi istiqametinde firlanmaya beraberdir,
    ve elave yaddas (yeni matris) yaratmaga ehtiyac qalmir.
"""

n = int(input())
matris = [list(map(int, input().split())) for _ in range(n)]

# 1) Transponirle: yalniz bas diaqonaldan yuxari hisseni yerdeyisdirmek kifayetdir
for i in range(n):
    for j in range(i + 1, n):
        matris[i][j], matris[j][i] = matris[j][i], matris[i][j]

# 2) Her setiri ozunun icinde ters cevir
for i in range(n):
    matris[i].reverse()

for setir in matris:
    print(*setir)
