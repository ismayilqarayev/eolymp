"""
Sual 23: Siyahinin butun elementlerini 2 defe artirin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Her element 2-ye vurulmus.

Numune:
    Giris:  3
            1 2 3
    Cixis:  2 4 6
"""

n = int(input())
arr = list(map(int, input().split()))

# list comprehension: her elementi ayri-ayrilikda 2-ye vururuq
netice = [x * 2 for x in arr]

print(*netice)
