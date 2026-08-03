"""
Sual 64: Butun alt-massivlerin cemlerini hesablayib en boyuyunu tapin (brute-force).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Butun ardıcıl (bitisik) alt-massivlerin cemleri arasindaki en boyuk qiymet.

Numune:
    Giris:  5
            -2 1 -3 4 5
    Cixis:  9   (alt-massiv: 4, 5)

Qeyd:
    Bu O(N^2) brute-force yanaşmadir -- her mumkun basланgic (i) ucun
    her mumkun son (j) noqtesine qeder cemi hesablayiriq. Daha suretli
    hell ucun 74-cu suala (Kadane alqoritmi) bax.
"""

n = int(input())
arr = list(map(int, input().split()))

en_boyuk = arr[0]
for i in range(len(arr)):
    cem = 0
    for j in range(i, len(arr)):
        cem += arr[j]                 # i-den j-e qeder olan cemi bir-bir artiririq
        en_boyuk = max(en_boyuk, cem) # her addimda en boyuk qiymeti yenileyirik

print(en_boyuk)
