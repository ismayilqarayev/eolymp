"""
Sual 36: Iki siralanmis siyahini birlesdirib siralanmis netice cixarin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (siralanmis).
    3-cu setirde M.
    4-cu setirde M eded (siralanmis).

Cixis (Output):
    Iki siyahinin birlesmesi, artan sirada.

Numune:
    Giris:  3
            1 3 5
            3
            2 4 6
    Cixis:  1 2 3 4 5 6

Alqoritmin izahi (merge addimi):
    Her iki siyahida iki gostericini (i, j) saxlayiriq. Her addimda daha
    kicik olan elementi neticeye elave edib, o siyahinin gostericisini
    ireli aparirq. Bu, Merge Sort alqoritminin esas hissesidir.
"""

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

i = j = 0       # iki siyahi ucun gostericiler
netice = []

while i < len(a) and j < len(b):
    if a[i] <= b[j]:
        netice.append(a[i])
        i += 1
    else:
        netice.append(b[j])
        j += 1

# Bir siyahi bitdikden sonra digerinin qalan hissesini oldugu kimi elave edirik
netice.extend(a[i:])
netice.extend(b[j:])

print(*netice)
