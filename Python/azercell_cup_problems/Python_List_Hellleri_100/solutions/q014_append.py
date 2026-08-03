"""
Sual 14: Siyahiya daxil olunan ededi sona elave edin (append).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde elave olunacaq eded.

Cixis (Output):
    Yeni (elave edilmis) siyahi.

Numune:
    Giris:  3
            1 2 3
            4
    Cixis:  1 2 3 4
"""

n = int(input())
arr = list(map(int, input().split()))
x = int(input())

# append() metodu verilen elementi siyahinin en sonuna elave edir
arr.append(x)

print(*arr)
