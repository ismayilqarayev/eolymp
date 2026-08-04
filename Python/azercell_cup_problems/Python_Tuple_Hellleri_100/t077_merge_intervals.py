"""
Sual 77: N eded (baslangic, son) interval kortecini daxil edib, ust-uste
dusen intervallari birlesdirin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "baslangic son".

Cixis (Output):
    Birlesdirilmis intervallar.

Numune:
    Giris:  3
            1 3
            2 6
            8 10
    Cixis:  1 6
            8 10
"""

n = int(input())

intervallar = []
for _ in range(n):
    interval = tuple(map(int, input().split()))
    intervallar.append(interval)

intervallar.sort()

netice = [intervallar[0]]
for b, s in intervallar[1:]:
    son_b, son_s = netice[-1]
    if b <= son_s:
        netice[-1] = (son_b, max(son_s, s))   # yeni kortec kimi yenilenir
    else:
        netice.append((b, s))

for b, s in netice:
    print(b, s)
