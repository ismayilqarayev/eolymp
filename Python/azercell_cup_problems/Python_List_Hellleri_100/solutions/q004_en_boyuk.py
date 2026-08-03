"""
Sual 4: Siyahidaki en boyuk elementi tapin (max() istifade etmeden).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Siyahidaki en boyuk (maksimum) eded.

Numune:
    Giris:  5
            3 7 2 9 4
    Cixis:  9
"""

n = int(input())
arr = list(map(int, input().split()))

# Basланgic olaraq en boyuk elementi siyahinin ilk elementi qebul edirik
en_boyuk = arr[0]

# Qalan elementleri bir-bir yoxlayirig
for x in arr:
    if x > en_boyuk:      # eger cari eded indiye qeder tapilan en boyukden boyukdurse
        en_boyuk = x       # en_boyuk deyisenini yenileyirik

print(en_boyuk)
