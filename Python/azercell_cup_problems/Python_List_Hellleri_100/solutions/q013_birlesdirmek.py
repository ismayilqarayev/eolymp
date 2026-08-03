"""
Sual 13: Iki siyahini birlesdirib yeni siyahi yaradin.

Giris (Input):
    1-ci setirde N (birinci siyahinin uzunlugu).
    2-ci setirde N eded.
    3-cu setirde M (ikinci siyahinin uzunlugu).
    4-cu setirde M eded.

Cixis (Output):
    Iki siyahinin ardicil birlesmesi (elave elementler A-nin sonuna elave olunur).

Numune:
    Giris:  2
            1 2
            3
            3 4 5
    Cixis:  1 2 3 4 5
"""

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

# Python-da iki siyahini "+" operatoru ile birlesdirmek onlari ardicil qosur
netice = a + b

print(*netice)
