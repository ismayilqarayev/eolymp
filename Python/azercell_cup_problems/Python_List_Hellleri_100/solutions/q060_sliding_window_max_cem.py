"""
Sual 60: Olcusu K olan pencerenin (sliding window) maksimum cemini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde K (pencerenin olcusu).

Cixis (Output):
    Ölçüsü K olan bütün ardıcıl alt-massivlərin (pencerelerin) en boyuk cemi.

Numune:
    Giris:  5
            1 4 2 10 3
            2
    Cixis:  13   (2+10=12 ve 10+3=13 pencereleri arasinda 13 daha boyukdur)

Alqoritmin izahi:
    Naiv usulda her pencere ucun cemi bashdan hesablasaq O(N*K) olar.
    Onun evezine ilk pencerenin cemini bir defe hesablayib, sonra
    pencereni saga bir addim suruşdükce yalniz "cixan" ve "giren"
    elementleri deyisdiririk -- bu O(N) mürəkkəbliyi verir.
"""

n = int(input())
arr = list(map(int, input().split()))
k = int(input())

# Ilk pencerenin (ilk K elementin) cemini hesablayiriq
cari_cem = sum(arr[:k])
max_cem = cari_cem

for i in range(k, len(arr)):
    # Pencereni bir addim saga suruşduruk:
    # yeni elementi elave et, pencereden cixan (en soldaki kohne) elementi cixar
    cari_cem += arr[i] - arr[i - k]
    max_cem = max(max_cem, cari_cem)

print(max_cem)
