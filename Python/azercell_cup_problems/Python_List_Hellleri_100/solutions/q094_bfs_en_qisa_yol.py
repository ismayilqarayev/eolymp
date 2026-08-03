"""
Sual 94: Adjacency list (qonsuluq siyahisi) seklinde verilmis qrafda BFS
ile iki tepe arasinda en qisa yolu tapin.

Giris (Input):
    1-ci setirde N (tepe sayi).
    2-ci setirde M (kenar sayi).
    Sonrakı M setirde her biri "u v" (kenar).
    Sonrakı setirde "basla son" (axtarilan tepeler).

Cixis (Output):
    Iki tepe arasindaki en qisa yolun uzunlugu (kenar sayi), yol yoxdursa -1.

Numune:
    Giris:  5
            4
            1 2
            2 3
            3 4
            4 5
            1 5
    Cixis:  4   (1->2->3->4->5)

Alqoritmin izahi (BFS - genislik-ustunlu axtaris):
    BFS qrafi "layer-layer" (mesafeye gore) gezir -- evvelce
    basланgicdan 1 kenar mesafede olan tepeler, sonra 2 kenar, ve s.
    Cizgisiz (agirliqsiz) qraflarda BFS en qisa yolu zemanetli tapir.
    Növbe (queue) strukturu ile tepeleri sıra ile gezib, her tepeye
    ilk defe cathiqda mesafesini qeyd edirik.
"""

from collections import deque

n = int(input())
m = int(input())

qraf = {i: [] for i in range(1, n + 1)}
for _ in range(m):
    u, v = map(int, input().split())
    qraf[u].append(v)
    qraf[v].append(u)  # yonelisiz qraf oldugu ucun her iki isiqamete elave edirik

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
