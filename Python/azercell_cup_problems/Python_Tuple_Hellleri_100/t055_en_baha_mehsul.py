"""
Sual 55: N eded (mehsul, qiymet) kortecini daxil edib, en baha mehsulu tapin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "mehsul qiymet".

Cixis (Output):
    En baha mehsulun adi ve qiymeti.

Numune:
    Giris:  2
            Alma 2
            Armud 3
    Cixis:  Armud 3
"""

n = int(input())

mehsullar = []
for _ in range(n):
    ad, qiymet = input().split()
    mehsullar.append((ad, int(qiymet)))

en_baha = mehsullar[0]
for mehsul in mehsullar:
    if mehsul[1] > en_baha[1]:
        en_baha = mehsul

print(en_baha[0], en_baha[1])
