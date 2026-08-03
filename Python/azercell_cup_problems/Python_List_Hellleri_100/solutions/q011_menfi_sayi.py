"""
Sual 11: Siyahidaki menfi ededlerin sayini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Menfi ededlerin sayi.

Numune:
    Giris:  5
            -1 2 -3 4 -5
    Cixis:  3
"""

n = int(input())
arr = list(map(int, input().split()))

# Sayaci 0-dan basladiriq
say = 0
for x in arr:
    if x < 0:      # eded sifirdan kicikdirse menfidir
        say += 1   # sayaci bir vahid artiririq

print(say)
