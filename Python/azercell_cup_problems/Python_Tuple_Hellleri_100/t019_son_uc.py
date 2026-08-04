"""
Sual 19: Kortecden slicing istifade ederek son 3 elementi cap edin.

Giris (Input):
    1-ci setirde N (N>=3).
    2-ci setirde N eded.

Cixis (Output):
    Son 3 element.

Numune:
    Giris:  5
            1 2 3 4 5
    Cixis:  3 4 5
"""

n = int(input())
kortec = tuple(map(int, input().split()))

# [-3:] -- sondan 3 elementi goturur
print(*kortec[-3:])
