"""
Sual 43: Matrisi transponire edin.

Giris (Input):
    1-ci setirde N ve M.
    Sonrakı N setirde matris (her biri M eded).

Cixis (Output):
    MxN olculu transponirelenmis matris (setirler sutunlara cevrilir).

Numune:
    Giris:  2 3
            1 2 3
            4 5 6
    Cixis:  1 4
            2 5
            3 6
"""

n, m = map(int, input().split())
matris = [list(map(int, input().split())) for _ in range(n)]

# Transponirelenmis matriste yeni [j][i] = kohne [i][j]
# Xarici dovr yeni setirleri (kohne sutunlari), daxili dovr elementleri gezir
transp = [[matris[i][j] for i in range(n)] for j in range(m)]

for setir in transp:
    print(*setir)
