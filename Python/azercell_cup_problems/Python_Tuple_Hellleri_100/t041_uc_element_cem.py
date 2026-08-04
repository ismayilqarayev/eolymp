"""
Sual 41: (a, b, c) formali 3 elementli kortecleri daxil edib, her birinin cemini tapin.

Giris (Input):
    1-ci setirde N (kortec sayi).
    Sonrakı N setirde 3 eded.

Cixis (Output):
    Her kortecin cemi.

Numune:
    Giris:  2
            1 2 3
            4 5 6
    Cixis:  6
            15
"""

n = int(input())
for _ in range(n):
    kortec = tuple(map(int, input().split()))
    print(sum(kortec))
