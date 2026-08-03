"""
Sual 15: Siyahinin mueyyen indeksindeki elementi silin (pop).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde silinecek indeks.

Cixis (Output):
    Qalan siyahi (element cixarildiqdan sonra).

Numune:
    Giris:  4
            10 20 30 40
            1
    Cixis:  10 30 40
"""

n = int(input())
arr = list(map(int, input().split()))
idx = int(input())

# pop(idx) o indeksdeki elementi siyahidan cixarir ve geri qaytarir
arr.pop(idx)

print(*arr)
