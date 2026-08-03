"""
Sual 25: Siyahidan butun menfi ededleri silin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Yalniz mensfi olmayan (>= 0) elementler.

Numune:
    Giris:  5
            -1 2 -3 4 5
    Cixis:  2 4 5
"""

n = int(input())
arr = list(map(int, input().split()))

# Yalniz sifir ve ya musbet olan elementleri saxlayan yeni siyahi qururuq
netice = [x for x in arr if x >= 0]

print(*netice)
