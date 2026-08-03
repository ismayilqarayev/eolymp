"""
Sual 20: Siyahidaki en boyuk ikinci elementi tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Siyahida ikinci boyuk qiymet.

Numune:
    Giris:  5
            4 8 2 9 5
    Cixis:  8
"""

n = int(input())
arr = list(map(int, input().split()))

# sorted(..., reverse=True) siyahini boyukden kicige dogru siralayir
s = sorted(arr, reverse=True)

# Siralanmis siyahida indeks 0 - en boyuk, indeks 1 - ikinci boyukdur
print(s[1])
