"""
Sual 67: Elementleri mod 3-e gore (0, 1, 2 qaliqlari) qruplasdirin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    3 setirde: mod 3 = 0 olanlar, mod 3 = 1 olanlar, mod 3 = 2 olanlar.

Numune:
    Giris:  6
            1 2 3 4 5 6
    Cixis:  3 6
            1 4
            2 5
"""

n = int(input())
arr = list(map(int, input().split()))

# % operatoru bolmenin qaligini qaytarir
qrup0 = [x for x in arr if x % 3 == 0]
qrup1 = [x for x in arr if x % 3 == 1]
qrup2 = [x for x in arr if x % 3 == 2]

print(*qrup0)
print(*qrup1)
print(*qrup2)
