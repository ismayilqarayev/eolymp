"""
Sual 36: Kortecden tekrarlanan elementleri silib unikal kortec yaradin (set olmadan).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Her element yalniz bir defe, ilk gorunme sirasi ile.

Numune:
    Giris:  6
            1 2 2 3 1 4
    Cixis:  1 2 3 4
"""

n = int(input())
kortec = tuple(map(int, input().split()))

muveqqeti = []
for x in kortec:
    if x not in muveqqeti:
        muveqqeti.append(x)

netice = tuple(muveqqeti)
print(*netice)
