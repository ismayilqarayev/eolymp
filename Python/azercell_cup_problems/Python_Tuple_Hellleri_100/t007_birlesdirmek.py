"""
Sual 7: Iki kortecı birlesdirib yeni kortec yaradin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde M.
    4-cu setirde M eded.

Cixis (Output):
    Iki kortecin ardicil birlesmesi.

Numune:
    Giris:  2
            1 2
            3
            3 4 5
    Cixis:  1 2 3 4 5
"""

n = int(input())
a = tuple(map(int, input().split()))
m = int(input())
b = tuple(map(int, input().split()))

# Kortecler ucun de "+" operatoru onlari ardicil birlesdirib yeni kortec qaytarir
netice = a + b

print(*netice)
