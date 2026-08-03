"""
Sual 68: Iki siyahinin skalyar hasilini (dot product) hesablayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (birinci siyahi).
    3-cu setirde N eded (ikinci siyahi).

Cixis (Output):
    Skalyar hasil: a[0]*b[0] + a[1]*b[1] + ... + a[n-1]*b[n-1]

Numune:
    Giris:  3
            1 2 3
            4 5 6
    Cixis:  32   (1*4 + 2*5 + 3*6 = 4+10+18 = 32)
"""

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Her indeksdeki ikili hasilleri hesablayib bir-birine topluyuriq
netice = sum(a[i] * b[i] for i in range(n))

print(netice)
