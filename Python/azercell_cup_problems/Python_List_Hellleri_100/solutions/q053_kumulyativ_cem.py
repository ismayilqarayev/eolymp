"""
Sual 53: Siyahidaki elementlerin kumulyativ (running) cemini tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Her indeksdeki kumulyativ (topluluq) cem: netice[i] = arr[0]+...+arr[i]

Numune:
    Giris:  4
            1 2 3 4
    Cixis:  1 3 6 10
"""

n = int(input())
arr = list(map(int, input().split()))

netice = []
cem = 0
for x in arr:
    cem += x            # cari elementi ümumi cemin ustune elave edirik
    netice.append(cem)  # o ana qeder olan cemi neticeye yaziriq

print(*netice)
