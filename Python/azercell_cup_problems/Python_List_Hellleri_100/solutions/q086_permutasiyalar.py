"""
Sual 86: Siyahinin butun permutasiyalarini rekursiya ile cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (adeten fərqli olur).

Cixis (Output):
    Butun N! permutasiya, her biri ayri setirde.

Numune:
    Giris:  3
            1 2 3
    Cixis:  1 2 3
            1 3 2
            2 1 3
            2 3 1
            3 1 2
            3 2 1

Alqoritmin izahi:
    Rekursiv olaraq: qalan elementlerden her birini novbe ile "secilmis"
    siyahinin sonuna elave edirik ve qalan elementlerin permutasiyalarini
    davam etdiririk. Qalan siyahi bosaldiqda, secilmis siyahi tam bir
    permutasiyadir -- onu cap edirik.
"""


def permutasiyalar(arr, cari=[]):
    if not arr:
        print(*cari)  # qalan element yoxdursa, cari tam permutasiyadir
        return

    for i in range(len(arr)):
        # arr[:i] + arr[i+1:] -- i-ci elementi cixarilmis qalan siyahi
        # cari + [arr[i]] -- secilmis siyahiya bu elementi elave edirik
        permutasiyalar(arr[:i] + arr[i + 1:], cari + [arr[i]])


n = int(input())
arr = list(map(int, input().split()))
permutasiyalar(arr)
