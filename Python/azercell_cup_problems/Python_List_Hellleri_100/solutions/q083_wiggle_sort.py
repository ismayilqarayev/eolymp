"""
Sual 83: Wiggle sort: a[0]<a[1]>a[2]<a[3]... sertine uygun sirala.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Wiggle sertine uygun siyahi.

Numune:
    Giris:  5
            3 5 2 1 6
    Cixis:  3 5 1 6 2

Qeyd:
    Bu 62-ci sualla ayni mentiq esasinda islyir -- qonsu elementleri
    lokal olaraq yerdeyisdirmekle wiggle sertini temin edirik.
"""

n = int(input())
arr = list(map(int, input().split()))

for i in range(len(arr) - 1):
    # Cut indeksde arr[i] < arr[i+1], tek indeksde arr[i] > arr[i+1] olmalidir
    if (i % 2 == 0 and arr[i] > arr[i + 1]) or (i % 2 == 1 and arr[i] < arr[i + 1]):
        arr[i], arr[i + 1] = arr[i + 1], arr[i]

print(*arr)
