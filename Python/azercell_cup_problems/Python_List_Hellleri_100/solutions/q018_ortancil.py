"""
Sual 18: Siyahinin ortancil elementini cap edin (indeks uzre).

Giris (Input):
    1-ci setirde N (tek eded olmalidir ki, tek orta olsun).
    2-ci setirde N eded.

Cixis (Output):
    Ortada yerlesen element.

Numune:
    Giris:  5
            1 2 3 4 5
    Cixis:  3
"""

n = int(input())
arr = list(map(int, input().split()))

# Tam bolme (//) ile ortadaki indeksi tapiriq
# Meselen n=5 olduqda 5//2 = 2, yeni arr[2] = 3-cu element (0-dan sayilanda)
orta_indeks = n // 2

print(arr[orta_indeks])
