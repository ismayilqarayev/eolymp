"""
Sual 94: N eded (sehir1, sehir2, mesafe) kortecini adjacency matrisine
cevirib Floyd-Warshall alqoritmi ile butun cutler arasinda en qisa yolu tapin.

Giris (Input):
    1-ci setirde N (sehir sayi).
    2-ci setirde M (yol sayi).
    Sonrakı M setirde "u v mesafe".

Cixis (Output):
    NxN en qisa yol matrisi.

Numune:
    Giris:  3
            2
            1 2 5
            2 3 2
    Cixis:  0 5 7
            5 0 2
            7 2 0
"""

BOYUK = 10 ** 9

n = int(input())
m = int(input())

# Adjacency matrisini yaradiriq: diaqonalda 0, qalanda BOYUK (yol yoxdur)
mesafe = [[0 if i == j else BOYUK for j in range(n)] for i in range(n)]

for _ in range(m):
    u, v, d = map(int, input().split())
    mesafe[u - 1][v - 1] = d
    mesafe[v - 1][u - 1] = d   # yonelisiz qraf

for k in range(n):
    for i in range(n):
        for j in range(n):
            if mesafe[i][k] + mesafe[k][j] < mesafe[i][j]:
                mesafe[i][j] = mesafe[i][k] + mesafe[k][j]

for setir in mesafe:
    print(*setir)
