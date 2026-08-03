"""
Sual 79: Siyahida K-ci en boyuk elementi quickselect alqoritmi ile tapin
(siyahini tam siralamadan).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde K.

Cixis (Output):
    K-ci en boyuk element.

Numune:
    Giris:  6
            3 2 1 5 6 4
            2
    Cixis:  5   (siralanmis: 6,5,4,3,2,1 -- 2-ci en boyuk 5-dir)

Alqoritmin izahi:
    Quick Sort-a oxsar sekilde tesadufi pivot secilir, siyahi pivotdan
    boyuk/beraber/kicik hisselere bolunur. K-ci en boyuk elementin hansi
    hissede oldugunu (say muqayisesi ile) tapib, YALNIZ O HISSEDE
    rekursiya davam etdirilir -- butun siyahini siralamaga ehtiyac qalmir.
    Ortalama mürəkkəblik O(N).
"""

import random


def quickselect(arr, k):
    if len(arr) == 1:
        return arr[0]

    pivot = random.choice(arr)
    boyukler = [x for x in arr if x > pivot]
    beraberler = [x for x in arr if x == pivot]
    kicikler = [x for x in arr if x < pivot]

    if k <= len(boyukler):
        # k-ci en boyuk element "boyukler" hissesindedir
        return quickselect(boyukler, k)
    elif k <= len(boyukler) + len(beraberler):
        # k, pivota beraber olan hisseye duşür
        return pivot
    else:
        # k-ci en boyuk element "kicikler" hissesindedir, k-ni uygun azaldiriq
        return quickselect(kicikler, k - len(boyukler) - len(beraberler))


n = int(input())
arr = list(map(int, input().split()))
k = int(input())
print(quickselect(arr, k))
