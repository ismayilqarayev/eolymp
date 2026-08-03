"""
Sual 55: Siyahida en uzun ARDICIL (bitisik) artan elementler zencirinin
uzunlugunu tapin (sade, tek dovrle hell olunan usul).

Qeyd: Bu, klassik "en uzun artan alt-ardicilliq (LIS)" meselesinden ferqlidir --
burada elementler siyahida bir-birinin YANINDA olmalidir (araligi kesilmemelidir).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    En uzun bitisik artan zencirin uzunlugu.

Numune:
    Giris:  6
            10 9 2 5 3 4
    Cixis:  2   (bitisik artan cutler: 2->5 ve 3->4, her ikisi de uzunluq 2-dir)
"""

n = int(input())
arr = list(map(int, input().split()))

en_uzun = 1   # minimum uzunluq 1-dir (tek element de "zencir" sayilir)
cari = 1

for i in range(1, n):
    if arr[i] > arr[i - 1]:
        # Element ozunden evvelkinden boyukdursa, zencir davam edir
        cari += 1
        en_uzun = max(en_uzun, cari)
    else:
        # Zencir qirilir, yeniden 1-den basleyirik
        cari = 1

print(en_uzun)
