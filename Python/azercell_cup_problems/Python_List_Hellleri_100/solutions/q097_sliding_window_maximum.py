"""
Sual 97: K olculu pencerede (sliding window) maksimum elementleri
O(N) mürəkkəbliklə tapin (deque istifade ederek).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde K.

Cixis (Output):
    Her ardicil K-olculu pencerenin maksimumu.

Numune:
    Giris:  8
            1 3 -1 -3 5 3 6 7
            3
    Cixis:  3 3 5 5 6 7

Alqoritmin izahi (monoton deque):
    Deque (iki-terefli sıra) icinde INDEKSLERI elə saxlayiriq ki,
    onlara uygun deyerler AZALAN sirada olsun. Yeni element gelende,
    ondan kicik olan butun sondaki elementleri deque-den atiriq (onlar
    artiq lazim deyil, cunki yeni element onlardan boyukdur ve daha
    sagdadir). Pencereden cixmis (cox kohne) indeksleri de basdan
    atiriq. Deque-in ЕВВЕЛИ (front) hemise cari pencerenin maksimumudur.
    Her element bir defe elave/cixarildigi ucun bu O(N) verir.
"""

from collections import deque

n = int(input())
arr = list(map(int, input().split()))
k = int(input())

netice = []
d = deque()  # cari pencerede potensial maksimum ola bilecek indeksler (azalan sirada)

for i in range(n):
    # Sondaki, yeni elementden kicik olan indeksleri atiriq (artiq faydasizdirlar)
    while d and arr[d[-1]] <= arr[i]:
        d.pop()
    d.append(i)

    # Pencereden cixmis (cox kohne) indeksi basdan atiriq
    if d[0] <= i - k:
        d.popleft()

    # Ilk tam pencere olusdukda (i >= k-1) neticeye maksimumu elave edirik
    if i >= k - 1:
        netice.append(arr[d[0]])

print(*netice)
