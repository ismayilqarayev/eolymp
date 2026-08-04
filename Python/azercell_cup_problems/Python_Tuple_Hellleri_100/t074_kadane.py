"""
Sual 74: Kadane alqoritmi ile maksimum alt-kortec (bitisik) cemini O(N) tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Maksimum cem.

Numune:
    Giris:  9
            -2 1 -3 4 -1 2 1 -5 4
    Cixis:  6
"""

n = int(input())
kortec = tuple(map(int, input().split()))

max_cari = kortec[0]
max_ended = kortec[0]
for x in kortec[1:]:
    max_cari = max(x, max_cari + x)
    max_ended = max(max_ended, max_cari)

print(max_ended)
