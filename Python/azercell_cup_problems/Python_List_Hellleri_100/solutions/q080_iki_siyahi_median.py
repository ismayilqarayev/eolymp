"""
Sual 80: Iki siralanmis siyahinin median deyerini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (siralanmis).
    3-cu setirde M.
    4-cu setirde M eded (siralanmis).

Cixis (Output):
    Iki siyahinin birlesmesinin mediani, 2 onluq reqemle.

Numune:
    Giris:  2
            1 3
            2
            2 4
    Cixis:  2.50

Qeyd:
    Bu sade versiya iki siyahini birlesdirib siralayir (O((N+M) log(N+M))).
    Daha optimal O(log(min(N,M))) hell ucun binar axtaris ile
    "bölme noqtesi" tapmaq lazımdır, lakin bu sade yanaşma da duzgun
    netice verir.
"""

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

birlesmis = sorted(a + b)
uzunluq = len(birlesmis)

if uzunluq % 2 == 1:
    # Tek sayda element varsa, median tam ortadaki elementdir
    median = birlesmis[uzunluq // 2]
else:
    # Cut sayda element varsa, median iki ortadaki elementin ortasidir
    median = (birlesmis[uzunluq // 2 - 1] + birlesmis[uzunluq // 2]) / 2

print(f"{median:.2f}")
