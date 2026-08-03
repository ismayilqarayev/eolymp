"""
Sual 19: Siyahinin elementlerinin arifmetik ortasini hesablayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Elementlerin ortasi, 2 onluq reqemle yuvarlaqlasdirilmis.

Numune:
    Giris:  4
            1 2 3 4
    Cixis:  2.50
"""

n = int(input())
arr = list(map(int, input().split()))

# Orta qiymet = elementlerin cemi / element sayi
orta = sum(arr) / n

# f-string daxilinde ":.2f" formati ededi 2 onluq reqemle cap edir
print(f"{orta:.2f}")
