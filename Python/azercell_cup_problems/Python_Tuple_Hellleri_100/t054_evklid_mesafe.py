"""
Sual 54: Iki (x, y) noqte kortecini daxil edib aralarindaki Evklid mesafesini tapin.

Giris (Input):
    "x1 y1" / "x2 y2".

Cixis (Output):
    Mesafe, 2 onluq.

Numune:
    Giris:  0 0
            3 4
    Cixis:  5.00
"""

import math

noqte1 = tuple(map(int, input().split()))
noqte2 = tuple(map(int, input().split()))

mesafe = math.sqrt((noqte1[0] - noqte2[0]) ** 2 + (noqte1[1] - noqte2[1]) ** 2)
print(f"{mesafe:.2f}")
