"""
Sual 32: Kortecdeki elementleri bubble sort mentiqi ile (yeni kortec kimi) siralayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Siralanmis kortec.

Numune:
    Giris:  4
            4 2 5 1
    Cixis:  1 2 4 5

Qeyd:
    Kortecler dəyişməz oldugu ucun, siralama esnasinda muveqqeti bir SIYAHI
    ustunde islemek lazimdir; son neticeni yeniden korteye ceviririk.
"""

n = int(input())
kortec = tuple(map(int, input().split()))

muveqqeti = list(kortec)   # kortec dəyişməzdir, ona gore muveqqeti siyahiya kociruruk
for i in range(len(muveqqeti)):
    for j in range(len(muveqqeti) - 1 - i):
        if muveqqeti[j] > muveqqeti[j + 1]:
            muveqqeti[j], muveqqeti[j + 1] = muveqqeti[j + 1], muveqqeti[j]

netice = tuple(muveqqeti)  # yeniden dəyişməz korteye ceviririk
print(*netice)
