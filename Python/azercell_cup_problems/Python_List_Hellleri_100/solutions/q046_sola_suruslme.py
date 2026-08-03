"""
Sual 46: Siyahinin elementlerini sola K movqe suruşdurun.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde K (suruşme miqdari).

Cixis (Output):
    Sola suruşulmus siyahi.

Numune:
    Giris:  5
            1 2 3 4 5
            2
    Cixis:  3 4 5 1 2

Yanasma:
    Siyahinin ilk K elementini sona, qalan hissesini evvele qoyuruq.
"""

n = int(input())
arr = list(map(int, input().split()))
k = int(input()) % n

# arr[k:] -- k-cu elementden basleyerek sona qeder (bunlar evvele kecir)
# arr[:k] -- ilk k eded (bunlar sona kecir)
netice = arr[k:] + arr[:k]

print(*netice)
