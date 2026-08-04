"""
Sual 48: Kortecden Fibonacci ededlerini secib cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Fibonacci ededleri.

Numune:
    Giris:  6
            1 2 4 5 8 13
    Cixis:  1 2 5 8 13
"""


def fibonaccidir(x):
    a, b = 0, 1
    if x < 0:
        return False
    while a < x:
        a, b = b, a + b
    return a == x


n = int(input())
kortec = tuple(map(int, input().split()))

netice = tuple(x for x in kortec if fibonaccidir(x))
print(*netice)
