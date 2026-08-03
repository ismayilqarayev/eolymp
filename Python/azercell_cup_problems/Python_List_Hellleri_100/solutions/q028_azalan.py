"""
Sual 28: Siyahinin azalan sirada olub-olmadigini yoxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    "Beli" - eger her element ozunden sonrakindan boyuk ve ya beraberdirse, eks halda "Xeyr".

Numune:
    Giris:  4
            7 5 3 1
    Cixis:  Beli
"""

n = int(input())
arr = list(map(int, input().split()))

# Her qonsu cut ucun azalan (ve ya beraber) olma sertini yoxlayiriq
azalandir = all(arr[i] >= arr[i + 1] for i in range(len(arr) - 1))

print("Beli" if azalandir else "Xeyr")
