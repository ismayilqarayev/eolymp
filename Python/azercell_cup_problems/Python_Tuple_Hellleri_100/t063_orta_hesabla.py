"""
Sual 63: N eded (ad, bal1, bal2) kortecini daxil edib, her telebenin ortasini
hesablayaraq cap edin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde "ad bal1 bal2".

Cixis (Output):
    "ad orta".

Numune:
    Giris:  1
            Ali 80 90
    Cixis:  Ali 85.00
"""

n = int(input())
for _ in range(n):
    ad, bal1, bal2 = input().split()
    orta = (int(bal1) + int(bal2)) / 2
    print(f"{ad} {orta:.2f}")
