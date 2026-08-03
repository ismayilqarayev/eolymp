"""
Sual 74: Kadane alqoritmi ile maksimum alt-massiv (bitisik) cemini O(N)
mürəkkəbliklə tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    En boyuk bitisik alt-massiv cemi.

Numune:
    Giris:  9
            -2 1 -3 4 -1 2 1 -5 4
    Cixis:  6   (alt-massiv: 4, -1, 2, 1)

Alqoritmin izahi:
    Her indeksde iki qerar var: ya cari elementden yeni alt-massiv
    baslamaq, ya da evvelki alt-massivin ustune elave etmek. Hansi
    daha boyukdursa, onu seciriz. Bu, tek dovrle (O(N)) hell olunur.
"""

n = int(input())
arr = list(map(int, input().split()))

max_cari = arr[0]   # cari elementde biten en boyuk alt-massiv cemi
max_ended = arr[0]  # indiye qeder tapilan en boyuk cem (umumi netice)

for x in arr[1:]:
    # Ya x ile yeni alt-massiv basla, ya da evvelki alt-massivi davam etdir
    max_cari = max(x, max_cari + x)
    max_ended = max(max_ended, max_cari)

print(max_ended)
