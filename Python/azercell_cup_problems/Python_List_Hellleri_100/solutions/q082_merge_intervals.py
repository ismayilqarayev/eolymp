"""
Sual 82: Ust-uste dusen intervallari birlesdirin (merge intervals).

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde her biri "başlanğıc son" formatinda interval.

Cixis (Output):
    Birlesdirilmis (ust-uste dusmeyen) intervallar, her biri ayri setirde.

Numune:
    Giris:  3
            1 3
            2 6
            8 10
    Cixis:  1 6
            8 10

Alqoritmin izahi:
    Evvelce intervallari basланgic qiymetine gore siralayiriq. Sonra
    ardicil olaraq gezib, cari intervalin başlanğıcı evvelki
    (netice siyahisindaki son) intervalin sonundan kicik ve ya
    beraberdirse, onlari birlesdiririk (sonu boyuduruk). Eks halda,
    yeni ayri interval kimi elave edirik.
"""

n = int(input())

intervallar = []
for _ in range(n):
    b, s = map(int, input().split())
    intervallar.append((b, s))

intervallar.sort()  # basланgic qiymetine gore siralayir (tuple muqayisesi ile)

netice = [intervallar[0]]
for b, s in intervallar[1:]:
    son_b, son_s = netice[-1]
    if b <= son_s:
        # Ust-uste dusur -- sonlari birlesdiririk (daha boyuk sonu seciriz)
        netice[-1] = (son_b, max(son_s, s))
    else:
        # Ust-uste dusmur -- yeni ayri interval kimi elave edirik
        netice.append((b, s))

for b, s in netice:
    print(b, s)
