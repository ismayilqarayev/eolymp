"""
Sual 61: Elementlerin ikili (binary) gorunusunu cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Her ededin ikili (2-lik say sistemi) gorunusu.

Numune:
    Giris:  3
            2 5 7
    Cixis:  10 101 111
"""

n = int(input())
arr = list(map(int, input().split()))

# bin(x) -> "0b101" kimi setir qaytarir, [2:] ile "0b" hissesini atiriq
netice = [bin(x)[2:] for x in arr]

print(*netice)
