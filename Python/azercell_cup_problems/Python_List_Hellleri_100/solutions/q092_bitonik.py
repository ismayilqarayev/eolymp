"""
Sual 92: En uzun bitonik alt-ardicilligi tapin (evvelce artan, sonra azalan).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    En uzun bitonik alt-ardicilligin uzunlugu.

Numune:
    Giris:  7
            1 2 5 3 2 1 0
    Cixis:  7   (butun ardicillıq artiq bitonikdir: 1,2,5 artir, 5,3,2,1,0 azalir)

Alqoritmin izahi:
    Iki DP massivi qururuq:
    - artan[i] = i-de biten en uzun artan alt-ardicilligin uzunlugu (73-cu sual kimi).
    - azalan[i] = i-de baslayan en uzun azalan alt-ardicilligin uzunlugu (eksine).
    Her i noqtesi ucun bitonik ardicilligin "zirvesi" ola biler:
    netice[i] = artan[i] + azalan[i] - 1 (i elementi iki defe sayilmasin deye -1).
    Butun i-ler ucun bu qiymetin maksimumu cavabdir.
"""

n = int(input())
arr = list(map(int, input().split()))

# artan[i]: arr[i]-de biten en uzun artan alt-ardicilliq
artan = [1] * n
for i in range(1, n):
    for j in range(i):
        if arr[j] < arr[i]:
            artan[i] = max(artan[i], artan[j] + 1)

# azalan[i]: arr[i]-den baslayan en uzun azalan alt-ardicilliq
azalan = [1] * n
for i in range(n - 2, -1, -1):
    for j in range(i + 1, n):
        if arr[j] < arr[i]:
            azalan[i] = max(azalan[i], azalan[j] + 1)

# Her noqteni "zirve" hesab edib maksimum bitonik uzunlugu tapiriq
en_uzun = max(artan[i] + azalan[i] - 1 for i in range(n))
print(en_uzun)
