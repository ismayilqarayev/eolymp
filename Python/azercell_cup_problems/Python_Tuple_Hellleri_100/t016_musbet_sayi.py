"""
Sual 16: Kortecdeki musbet ededlerin sayini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Musbet ededlerin sayi.

Numune:
    Giris:  5
            -1 2 -3 4 -5
    Cixis:  2
"""

n = int(input())
kortec = tuple(map(int, input().split()))

say = 0
for x in kortec:
    if x > 0:
        say += 1

print(say)
