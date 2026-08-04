"""
Sual 81: N eded (sehir1, sehir2, mesafe) kortecini daxil edib, adjacency
siyahi qurub BFS ile iki sehir arasinda en qisa yolu (kenar sayi) tapin.

Giris (Input):
    1-ci setirde N (sehir sayi).
    2-ci setirde M (yol sayi).
    Sonrakı M setirde "u v".
    Sonrakı setirde "baslangic son".

Cixis (Output):
    En qisa yol uzunlugu (kenar sayi), yol yoxdursa -1.

Numune:
    Giris:  5
            4
            1 2
            2 3
            3 4
            4 5
            1 5
    Cixis:  4
"""

from collections import deque

n = int(input())
m = int(input())

qraf = {i: [] for i in range(1, n + 1)}
for _ in range(m):
    u, v = map(int, input().split())
    qraf[u].append(v)
    qraf[v].append(u)

basla, son = map(int, input().split())

mesafe = {basla: 0}
sira = deque([basla])
while sira:
    cari = sira.popleft()
    if cari == son:
        break
    for qonsu in qraf[cari]:
        if qonsu not in mesafe:
            mesafe[qonsu] = mesafe[cari] + 1
            sira.append(qonsu)

print(mesafe.get(son, -1))
