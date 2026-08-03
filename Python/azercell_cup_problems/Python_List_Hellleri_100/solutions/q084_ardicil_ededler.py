"""
Sual 84: En uzun ardicil ededler ardicilliginin uzunlugunu tapin
(meselen 1,2,3,4 -- deyerce ardicil, siyahida yeri onemli deyil).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    En uzun ardicil deyerler zencirinin uzunlugu.

Numune:
    Giris:  6
            100 4 200 1 3 2
    Cixis:  4   (1, 2, 3, 4 ardicildir)

Alqoritmin izahi:
    Elementleri set-e (coxluqa) qoyuruq ki, O(1) suretinde yoxlama edek.
    Her eded ucun, eger x-1 mecmuda YOXDURSA, demeli x bir zencirin
    baslangicidir. O zaman x, x+1, x+2, ... mecmuda olduqca zenciri
    davam etdiririk. Bu usul her elementi cemi bir defe zencirin
    basi kimi yoxladigi ucun O(N) mürəkkəbliyi verir.
"""

n = int(input())
arr = list(map(int, input().split()))

mecmu = set(arr)
en_uzun = 0

for x in mecmu:
    if x - 1 not in mecmu:
        # x bir zencirin baslangicidir (ondan evvelki deyer mecmuda yoxdur)
        uzunluq = 1
        cari = x
        while cari + 1 in mecmu:
            cari += 1
            uzunluq += 1
        en_uzun = max(en_uzun, uzunluq)

print(en_uzun)
