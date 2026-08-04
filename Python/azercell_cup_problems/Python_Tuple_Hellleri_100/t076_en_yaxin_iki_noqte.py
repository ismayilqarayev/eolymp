"""
Sual 76: N noqteni daxil edib en yaxin iki noqte arasindaki mesafeni tapin
(brute-force).

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "x y".

Cixis (Output):
    Minimum mesafe, 2 onluq.

Numune:
    Giris:  3
            0 0
            3 4
            1 1
    Cixis:  1.41
"""

import math

n = int(input())

noqteler = []
for _ in range(n):
    noqte = tuple(map(int, input().split()))
    noqteler.append(noqte)

en_kicik = float('inf')
for i in range(n):
    for j in range(i + 1, n):
        x1, y1 = noqteler[i]
        x2, y2 = noqteler[j]
        mesafe = math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)
        en_kicik = min(en_kicik, mesafe)

print(f"{en_kicik:.2f}")
