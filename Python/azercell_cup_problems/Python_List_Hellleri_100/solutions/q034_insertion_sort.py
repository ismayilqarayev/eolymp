"""
Sual 34: Siyahini insertion sort ile duzun.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Artan sirada siralanmis siyahi.

Numune:
    Giris:  4
            5 2 4 1
    Cixis:  1 2 4 5

Alqoritmin izahi:
    Siyahini soldan saga gedirik. Her yeni elementi (key) artiq siralanmis
    sol hisseye "doğru yerine" daxil edirik, ondan boyuk elementleri
    bir mövqe saga suruşduraraq.
"""

n = int(input())
arr = list(map(int, input().split()))

for i in range(1, len(arr)):
    key = arr[i]        # yerlesdirilecek cari eded
    j = i - 1
    # key-den boyuk olan elementleri bir movqe saga suruşduruk
    while j >= 0 and arr[j] > key:
        arr[j + 1] = arr[j]
        j -= 1
    # key-i bosalan yerine qoyuriq
    arr[j + 1] = key

print(*arr)
