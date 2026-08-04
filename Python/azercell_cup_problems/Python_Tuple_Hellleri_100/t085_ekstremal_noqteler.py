"""
Sual 85: N noqtenin ekstremal (en kicik/boyuk x/y) unikal noqte sayini tapin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "x y".

Cixis (Output):
    Ekstremal unikal noqte sayi.

Numune:
    Giris:  4
            0 0
            0 5
            5 0
            5 5
    Cixis:  4
"""

n = int(input())

noqteler = []
for _ in range(n):
    noqte = tuple(map(int, input().split()))
    noqteler.append(noqte)

min_x = min(p[0] for p in noqteler)
max_x = max(p[0] for p in noqteler)
min_y = min(p[1] for p in noqteler)
max_y = max(p[1] for p in noqteler)

ekstremal = set()
for p in noqteler:
    if p[0] in (min_x, max_x) or p[1] in (min_y, max_y):
        ekstremal.add(p)

print(len(ekstremal))
