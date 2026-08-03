"""
Sual 62: Siyahini zigzag formada duzun: a[0]<a[1]>a[2]<a[3]...

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Zigzag (dalgavari) sirada elementler.

Numune:
    Giris:  4
            4 3 7 8
    Cixis:  3 7 4 8

Alqoritmin izahi:
    Soldan saga gedirik. Cut indeksde element ozunden sonrakindan kicik,
    tek indeksde isə boyuk olmalidir. Sert pozulduqda qonsu elementleri
    sadece yerdeyisdiririk -- bu qonsulari duzgun sekilde tenzimleyir.
"""

n = int(input())
arr = list(map(int, input().split()))

for i in range(len(arr) - 1):
    # Cut indeksde (i cut) a[i] < a[i+1] olmalidir, tek indeksde eksi
    if (i % 2 == 0 and arr[i] > arr[i + 1]) or (i % 2 == 1 and arr[i] < arr[i + 1]):
        arr[i], arr[i + 1] = arr[i + 1], arr[i]

print(*arr)
