"""
Sual 92: Kortec seklinde verilmis ededler arasinda en uzun bitonik alt-ardicilligi
DP ile tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Uzunluq.

Numune:
    Giris:  7
            1 2 5 3 2 1 0
    Cixis:  7
"""

n = int(input())
kortec = tuple(map(int, input().split()))

artan = [1] * n
for i in range(1, n):
    for j in range(i):
        if kortec[j] < kortec[i]:
            artan[i] = max(artan[i], artan[j] + 1)

azalan = [1] * n
for i in range(n - 2, -1, -1):
    for j in range(i + 1, n):
        if kortec[j] < kortec[i]:
            azalan[i] = max(azalan[i], azalan[j] + 1)

en_uzun = max(artan[i] + azalan[i] - 1 for i in range(n))
print(en_uzun)
