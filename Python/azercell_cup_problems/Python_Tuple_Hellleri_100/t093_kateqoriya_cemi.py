"""
Sual 93: N eded (mehsul, kateqoriya, qiymet) kortecini daxil edib, her
kateqoriyanin umumi meblegini hesablayin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "mehsul kateqoriya qiymet".

Cixis (Output):
    Her kateqoriya ucun "kateqoriya:cem".

Numune:
    Giris:  3
            Alma Meyve 2
            Armud Meyve 3
            Kartof Terevez 1
    Cixis:  Meyve:5
            Terevez:1
"""

n = int(input())

cemler = {}
sira = []   # kateqoriyalarin ilk gorunme sirasini saxlamaq ucun
for _ in range(n):
    mehsul, kateqoriya, qiymet = input().split()
    qiymet = int(qiymet)
    if kateqoriya not in cemler:
        cemler[kateqoriya] = 0
        sira.append(kateqoriya)
    cemler[kateqoriya] += qiymet

for kateqoriya in sira:
    print(f"{kateqoriya}:{cemler[kateqoriya]}")
