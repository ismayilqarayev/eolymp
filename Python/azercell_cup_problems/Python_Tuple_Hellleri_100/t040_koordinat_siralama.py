"""
Sual 40: N eded (x, y) koordinat kortecini daxil edib, y deyerine gore siralayin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "x y".

Cixis (Output):
    y-e gore artan sirada "x y" cutleri.

Numune:
    Giris:  3
            1 5
            2 2
            3 8
    Cixis:  2 2
            1 5
            3 8
"""

n = int(input())

noqteler = []
for _ in range(n):
    x, y = map(int, input().split())
    noqteler.append((x, y))    # her noqte (x, y) kortecidir

# key=lambda p: p[1] -- kortecin ikinci elementine (y) gore siralamaq ucun
noqteler.sort(key=lambda p: p[1])

for x, y in noqteler:
    print(x, y)
