"""
Sual 32: Siyahini bubble sort ile artan sirada duzun.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Artan sirada siralanmis siyahi.

Numune:
    Giris:  4
            4 2 5 1
    Cixis:  1 2 4 5

Alqoritmin izahi:
    Bubble Sort qonsu elementleri muqayise edib, sirasi seshv olanlari
    yerdeyisdirir. Her tam kecisde en boyuk qalan element "yuxariya" (sona)
    qalxir, buna gore de her kecisde axtaris sahesini bir azaldiriq.
"""

n = int(input())
arr = list(map(int, input().split()))

for i in range(len(arr)):
    # Her kecisde son i eded artiq oz yerindedir, onlari yoxlamaga ehtiyac yoxdur
    for j in range(len(arr) - 1 - i):
        if arr[j] > arr[j + 1]:
            # Qonsu elementler seshv sirada olduqda onlari yerdeyisdiririk
            arr[j], arr[j + 1] = arr[j + 1], arr[j]

print(*arr)
