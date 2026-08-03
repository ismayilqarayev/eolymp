"""
Sual 71: Quick Sort ile siyahini siralayin (rekursiya).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Artan sirada siralanmis siyahi.

Numune:
    Giris:  5
            5 3 8 1 9
    Cixis:  1 3 5 8 9

Alqoritmin izahi:
    1) Siyahidan bir "pivot" (ortadaki element) secilir.
    2) Siyahi uc hisseye bolunur: pivotdan kicikler, pivota beraberler,
       pivotdan boyukler.
    3) Kicik ve boyuk hisseler rekursiv sekilde eyni qayda ile siralanir.
    4) Netice: siralanmis(kicikler) + beraberler + siralanmis(boyukler).
"""


def quick_sort(arr):
    if len(arr) <= 1:
        return arr  # 0 ve ya 1 elementli siyahi artiq siralanmisdir

    pivot = arr[len(arr) // 2]
    kicikler = [x for x in arr if x < pivot]
    beraberler = [x for x in arr if x == pivot]
    boyukler = [x for x in arr if x > pivot]

    # Kicik ve boyuk hisseleri rekursiv siralayib, aralarina beraberleri qoyuriq
    return quick_sort(kicikler) + beraberler + quick_sort(boyukler)


n = int(input())
arr = list(map(int, input().split()))
print(*quick_sort(arr))
