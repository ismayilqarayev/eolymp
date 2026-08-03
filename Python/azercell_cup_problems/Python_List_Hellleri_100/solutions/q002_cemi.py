"""
Sual 2: Siyahinin butun elementlerinin cemini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Butun elementlerin cemi (tek eded).

Numune:
    Giris:  4
            1 2 3 4
    Cixis:  10
"""

n = int(input())
arr = list(map(int, input().split()))

# sum() built-in funksiyasi siyahidaki butun elementleri bir-bir toplayir
netice = sum(arr)

print(netice)
