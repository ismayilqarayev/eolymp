"""
Sual 52: Siyahidaki ededleri cut/tek olaraq iki siyahiya bolun.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    1-ci setirde cut ededler, 2-ci setirde tek ededler.

Numune:
    Giris:  5
            1 2 3 4 5
    Cixis:  2 4
            1 3 5
"""

n = int(input())
arr = list(map(int, input().split()))

# Iki ayri list comprehension ile cut ve tek elementleri bölürük
cutler = [x for x in arr if x % 2 == 0]
tekler = [x for x in arr if x % 2 != 0]

print(*cutler)
print(*tekler)
