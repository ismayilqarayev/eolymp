"""
Sual 33: Siyahini selection sort ile duzun.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Artan sirada siralanmis siyahi.

Numune:
    Giris:  4
            3 1 4 2
    Cixis:  1 2 3 4

Alqoritmin izahi:
    Her addimda qalan (sirasиzelanmamis) hisseden en kicik elementi tapib,
    onu cari movqeye (evvele) gonderiyik.
"""

n = int(input())
arr = list(map(int, input().split()))

for i in range(len(arr)):
    min_idx = i  # bu addimda en kicik hesab olunan elementin indeksi
    for j in range(i + 1, len(arr)):
        if arr[j] < arr[min_idx]:
            min_idx = j  # daha kicik element tapdiqda indeksi yenileyirik
    # Tapilan en kicik elementi cari movqe ile yerdeyisdiririk
    arr[i], arr[min_idx] = arr[min_idx], arr[i]

print(*arr)
