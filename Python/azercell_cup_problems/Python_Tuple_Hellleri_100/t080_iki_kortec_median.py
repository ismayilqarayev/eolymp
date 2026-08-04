"""
Sual 80: Iki siralanmis kortecin median deyerini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (siralanmis).
    3-cu setirde M.
    4-cu setirde M eded (siralanmis).

Cixis (Output):
    Median, 2 onluq.

Numune:
    Giris:  2
            1 3
            2
            2 4
    Cixis:  2.50
"""

n = int(input())
a = tuple(map(int, input().split()))
m = int(input())
b = tuple(map(int, input().split()))

birlesmis = sorted(a + b)
uzunluq = len(birlesmis)

if uzunluq % 2 == 1:
    median = birlesmis[uzunluq // 2]
else:
    median = (birlesmis[uzunluq // 2 - 1] + birlesmis[uzunluq // 2]) / 2

print(f"{median:.2f}")
