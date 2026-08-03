"""
Sual 6: Siyahini tersine cevirin (reverse() istifade etmeden).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Siyahi ters sirada.

Numune:
    Giris:  4
            1 2 3 4
    Cixis:  4 3 2 1
"""

n = int(input())
arr = list(map(int, input().split()))

# Yeni bos siyahi yaradiriq, sona qeder elementleri buraya elave edecegik
ters = []

# Indeksleri sondan basa dogru gedirik: len(arr)-1, len(arr)-2, ..., 0
for i in range(len(arr) - 1, -1, -1):
    ters.append(arr[i])   # her addimda arxadan bir element goturub elave edirik

print(*ters)
