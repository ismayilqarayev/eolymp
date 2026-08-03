"""
Sual 90: Next Greater Element -- her elementden sagda ondan boyuk olan
ilk elementi (stack istifade ederek) tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Her element ucun ondan sagda olan ilk boyuk element (yoxdursa -1).

Numune:
    Giris:  4
            4 5 2 10
    Cixis:  5 10 10 -1

Alqoritmin izahi (monoton stack):
    Yigin (stack) icinde hele "boyuk qonsusu tapilmamis" elementlerin
    INDEKSLERINI saxlayiriq. Yeni elementi gordukde, yigindaki bütün
    elementlerden bundan kicik olanlarin cavabı bu yeni elementdir --
    onlari yigindan cixarib cavablarini yaziriq. Sonda yigin icinde
    qalanlarin cavabi -1 olaraq qalir (sagda boyuk qonsu tapilmadi).
    Bu usul O(N) mürəkkəbliyi verir (her element bir defe elave/cixarilir).
"""

n = int(input())
arr = list(map(int, input().split()))

netice = [-1] * n
yigin = []  # hele cavabı tapilmamis elementlerin indeksleri

for i in range(n):
    # Yigindaki son elementden kicik olan hər elementin cavabi arr[i]-dir
    while yigin and arr[yigin[-1]] < arr[i]:
        idx = yigin.pop()
        netice[idx] = arr[i]
    yigin.append(i)

print(*netice)
