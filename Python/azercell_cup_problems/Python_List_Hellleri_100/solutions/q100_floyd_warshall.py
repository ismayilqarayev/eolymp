"""
Sual 100: N sehir arasindaki adjacency matrisi verilib, Floyd-Warshall
alqoritmi ile butun cutler arasinda en qisa yollari tapin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde NxN adjacency matrisi (mesafeler; yol yoxdursa
    boyuk bir eded, meselen 1000, istifade olunur).

Cixis (Output):
    Butun cut sehirler arasinda en qisa yol mesafelerini eks etdiren
    yenilenmis NxN matris.

Numune:
    Giris:  3
            0 5 1000
            5 0 2
            1000 2 0
    Cixis:  0 5 7
            5 0 2
            7 2 0

Alqoritmin izahi:
    Floyd-Warshall her mumkun "araвертекс" k ucun yoxlayir: eger
    i-den k-ya ve k-dan j-e getmek, i-den j-e birbasa getmekden
    qisadirsa, mesafe[i][j]-ni yenileyirik:
        mesafe[i][j] = min(mesafe[i][j], mesafe[i][k] + mesafe[k][j])
    Uc ic-ice dovr (k, i, j) ile butun cutler ucun bu yoxlama aparilir.
    Netice etibarile O(N^3) mürəkkəbliyi ile HAMI cutler arasinda
    en qisa yollar tapilir.
"""

n = int(input())
mesafe = [list(map(int, input().split())) for _ in range(n)]

for k in range(n):          # araвертекс kimi hansi sehri istifade edirik
    for i in range(n):       # basланgic sehri
        for j in range(n):   # hedef sehri
            if mesafe[i][k] + mesafe[k][j] < mesafe[i][j]:
                mesafe[i][j] = mesafe[i][k] + mesafe[k][j]

for setir in mesafe:
    print(*setir)
