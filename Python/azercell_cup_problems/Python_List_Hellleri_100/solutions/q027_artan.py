"""
Sual 27: Siyahinin artan sirada olub-olmadigini yoxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    "Beli" - eger her element ozunden sonrakindan kicik ve ya beraberdirse, eks halda "Xeyr".

Numune:
    Giris:  4
            1 3 5 7
    Cixis:  Beli
"""

n = int(input())
arr = list(map(int, input().split()))

# all(...) -- generator icindeki BUTUN sertlerin True olmasini yoxlayir
# arr[i] <= arr[i+1] -- her qonsu cut ucun artan (ve ya beraber) olma sertidir
artandir = all(arr[i] <= arr[i + 1] for i in range(len(arr) - 1))

print("Beli" if artandir else "Xeyr")
