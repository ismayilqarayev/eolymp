"""
Sual 22: Verilmis ededi siyahinin evveline elave edin (insert).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde elave olunacaq eded.

Cixis (Output):
    Yeni siyahi (evvele elave edildikden sonra).

Numune:
    Giris:  3
            2 3 4
            1
    Cixis:  1 2 3 4
"""

n = int(input())
arr = list(map(int, input().split()))
x = int(input())

# insert(0, x) -> x-i indeks 0-a (yeni en evvele) yerlesdirir,
# butun qalan elementler bir movqe sага dogru "surusur"
arr.insert(0, x)

print(*arr)
