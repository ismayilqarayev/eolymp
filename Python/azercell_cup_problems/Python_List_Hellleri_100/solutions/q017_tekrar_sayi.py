"""
Sual 17: Siyahida verilmis ededin nece defe tekrarlandigini tapin (count() olmadan).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde axtarilan eded.

Cixis (Output):
    Verilmis ededin siyahida tekrarlanma sayi.

Numune:
    Giris:  6
            1 2 2 3 2 4
            2
    Cixis:  3
"""

n = int(input())
arr = list(map(int, input().split()))
x = int(input())

# Her elementi teker-teker yoxlayib, axtarilan ededle usta-usta gelenleri sayiriq
say = 0
for el in arr:
    if el == x:
        say += 1

print(say)
