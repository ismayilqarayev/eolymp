"""
Sual 28: Bir funksiya iki ededin hem cemini, hem hasilini kortec kimi qaytarsin.

Giris (Input):
    Bir setirde "a b".

Cixis (Output):
    "cem hasil".

Numune:
    Giris:  2 3
    Cixis:  5 6
"""


def cem_ve_hasil(a, b):
    # Python-da "return x, y" avtomatik olaraq (x, y) kortecini qaytarir
    return a + b, a * b


a, b = map(int, input().split())
netice = cem_ve_hasil(a, b)   # netice bir kortecdir: (cem, hasil)

print(*netice)
