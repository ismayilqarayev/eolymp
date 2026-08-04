"""
Sual 10: Kortecde verilmis ededin nece defe tekrarlandigini tapin (count() olmadan).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde axtarilan eded.

Cixis (Output):
    Tekrar sayi.

Numune:
    Giris:  6
            1 2 2 3 2 4
            2
    Cixis:  3
"""

n = int(input())
kortec = tuple(map(int, input().split()))
x = int(input())

say = 0
for el in kortec:
    if el == x:
        say += 1

print(say)
