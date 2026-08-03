"""
Sual 5: Siyahidaki en kicik elementi tapin (min() istifade etmeden).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Siyahidaki en kicik (minimum) eded.

Numune:
    Giris:  5
            3 7 2 9 4
    Cixis:  2
"""

n = int(input())
arr = list(map(int, input().split()))

# Basланgic olaraq en kicik elementi siyahinin ilk elementi qebul edirik
en_kicik = arr[0]

for x in arr:
    if x < en_kicik:       # cari eded indiye qeder tapilan en kicikden kicikdirse
        en_kicik = x        # en_kicik deyisenini yenileyirik

print(en_kicik)
