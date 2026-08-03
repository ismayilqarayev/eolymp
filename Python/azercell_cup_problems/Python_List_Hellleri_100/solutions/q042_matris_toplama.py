"""
Sual 42: Iki matrisi toplayib neticeni cap edin.

Giris (Input):
    1-ci setirde N ve M.
    Sonrakı N setirde birinci matris (her biri M eded).
    Sonrakı N setirde ikinci matris (her biri M eded).

Cixis (Output):
    Iki matrisin usta-usta (element-be-element) cemi.

Numune:
    Giris:  1 2
            1 2
            3 4
    Cixis:  4 6
"""

n, m = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(n)]
B = [list(map(int, input().split())) for _ in range(n)]

# Her (i, j) mövqesindeki elementleri ayri-ayrilikda topluyuruq
netice = [[A[i][j] + B[i][j] for j in range(m)] for i in range(n)]

for setir in netice:
    print(*setir)
