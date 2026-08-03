"""
Sual 35: Verilmis ededi binary search ile axtarin (siyahi siralanmis olmalidir).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (artan sirada siralanmis).
    3-cu setirde axtarilan eded.

Cixis (Output):
    Ededin indeksi (0-dan basleyerek), tapilmasa -1.

Numune:
    Giris:  5
            1 3 5 7 9
            7
    Cixis:  3

Alqoritmin izahi:
    Siralanmis siyahida her addimda axtaris sahesini yariya bolur, ortadaki
    elementle muqayise edir ve axtaris sahesini muvafiq teref daralddir.
    Beleliкле O(log N) muddetinde netice tapilir.
"""

n = int(input())
arr = list(map(int, input().split()))
x = int(input())

lo, hi = 0, len(arr) - 1   # axtaris sahesinin sol ve sag serhedleri
netice = -1                 # defolt olaraq tapilmadi

while lo <= hi:
    mid = (lo + hi) // 2    # ortadaki indeks
    if arr[mid] == x:
        netice = mid         # tapildi
        break
    elif arr[mid] < x:
        lo = mid + 1         # axtarilan eded sagdadir, sol serhedi ireli aparirq
    else:
        hi = mid - 1         # axtarilan eded soldadir, sag serhedi geri aparirq

print(netice)
