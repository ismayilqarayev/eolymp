"""
Sual 48: Siyahidan Fibonacci ededlerini secib cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Fibonacci ardicilligina daxil olan elementler.

Numune:
    Giris:  6
            1 2 4 5 8 13
    Cixis:  1 2 5 8 13
"""


def fibonaccidir(x):
    """Verilmis ededin Fibonacci ardicilliginda olub-olmadigini yoxlayir."""
    a, b = 0, 1
    if x < 0:
        return False
    # Fibonacci ededlerini x-e qeder generasiya edirik
    while a < x:
        a, b = b, a + b
    return a == x  # eger a deqiq x-e beraberdirse, x fibonacci ededidir


n = int(input())
arr = list(map(int, input().split()))

print(*[x for x in arr if fibonaccidir(x)])
