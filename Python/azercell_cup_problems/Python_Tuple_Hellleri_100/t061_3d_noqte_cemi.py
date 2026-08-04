"""
Sual 61: N eded (x, y, z) 3D noqte kortecini daxil edib, koordinat oxlarina
gore cemlerini tapin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "x y z".

Cixis (Output):
    "x_cem y_cem z_cem".

Numune:
    Giris:  2
            1 2 3
            4 5 6
    Cixis:  5 7 9
"""

n = int(input())

noqteler = []
for _ in range(n):
    noqte = tuple(map(int, input().split()))
    noqteler.append(noqte)

x_cem = sum(p[0] for p in noqteler)
y_cem = sum(p[1] for p in noqteler)
z_cem = sum(p[2] for p in noqteler)

print(x_cem, y_cem, z_cem)
