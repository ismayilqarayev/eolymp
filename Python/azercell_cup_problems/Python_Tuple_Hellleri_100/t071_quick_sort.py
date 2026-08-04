"""
Sual 71: Kortecdeki elementleri Quick Sort ile rekursiya vasitesile siralayib
yeni kortec kimi qaytarin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Siralanmis kortec.

Numune:
    Giris:  5
            5 3 8 1 9
    Cixis:  1 3 5 8 9
"""


def quick_sort(kortec):
    if len(kortec) <= 1:
        return kortec

    pivot = kortec[len(kortec) // 2]
    kicikler = tuple(x for x in kortec if x < pivot)
    beraberler = tuple(x for x in kortec if x == pivot)
    boyukler = tuple(x for x in kortec if x > pivot)

    # Kortecler "+" operatoru ile birlesdirilir -- rekursiyanin neticesi de kortecdir
    return quick_sort(kicikler) + beraberler + quick_sort(boyukler)


n = int(input())
kortec = tuple(map(int, input().split()))
print(*quick_sort(kortec))
