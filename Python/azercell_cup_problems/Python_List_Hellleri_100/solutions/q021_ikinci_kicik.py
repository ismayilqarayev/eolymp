"""
Sual 21: Siyahidaki en kicik ikinci elementi tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Siyahida ikinci kicik qiymet.

Numune:
    Giris:  5
            4 8 2 9 5
    Cixis:  4
"""

n = int(input())
arr = list(map(int, input().split()))

# sorted() elementleri kicikden boyuge dogru siralayir
s = sorted(arr)

# indeks 0 - en kicik, indeks 1 - ikinci kicik
print(s[1])
