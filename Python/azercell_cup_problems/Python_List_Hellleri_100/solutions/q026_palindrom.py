"""
Sual 26: Siyahinin palindrom olub-olmadigini yoxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    "Beli" - eger siyahi hem sagdan, hem soldan oxundugda eynidirse, eks halda "Xeyr".

Numune:
    Giris:  5
            1 2 3 2 1
    Cixis:  Beli
"""

n = int(input())
arr = list(map(int, input().split()))

# arr[::-1] -- siyahinin tersden yazilmis versiyasi (slicing ile)
# Eger orijinal siyahi ozunun tersine berabersedirsе, palindromdur
if arr == arr[::-1]:
    print("Beli")
else:
    print("Xeyr")
