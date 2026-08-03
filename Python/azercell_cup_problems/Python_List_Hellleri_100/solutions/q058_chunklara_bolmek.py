"""
Sual 58: Siyahini K olculu alt-siyahilara (chunk) bolun.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde K (her chunkin olcusu).

Cixis (Output):
    Her chunk ayri setirde.

Numune:
    Giris:  5
            1 2 3 4 5
            2
    Cixis:  1 2
            3 4
            5
"""

n = int(input())
arr = list(map(int, input().split()))
k = int(input())

# range(0, len(arr), k) -- 0, k, 2k, 3k, ... indekslerini gezirik
for i in range(0, len(arr), k):
    # arr[i:i+k] -- i-dən başlayaraq k eded goturur (son chunk qisa ola biler)
    print(*arr[i:i + k])
