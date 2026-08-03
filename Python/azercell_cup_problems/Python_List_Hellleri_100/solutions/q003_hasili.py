"""
Sual 3: Siyahinin butun elementlerinin hasilini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Butun elementlerin hasili (vurma neticesi).

Numune:
    Giris:  3
            2 3 4
    Cixis:  24
"""

n = int(input())
arr = list(map(int, input().split()))

# Hasili saxlamaq ucun basit deyer 1-den baslayiriq (vurmanin neytral elementi)
hasil = 1

# Her elementi novbe ile hasil deyisenine vururuq
for x in arr:
    hasil *= x  # hasil = hasil * x

print(hasil)
