"""
Sual 98: K olculu pencerede (kortec seklinde verilmis massivde) maksimum
elementleri O(N) mürəkkəbliklə tapin (deque istifade ederek).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde K.

Cixis (Output):
    Her pencerenin maksimumu.

Numune:
    Giris:  8
            1 3 -1 -3 5 3 6 7
            3
    Cixis:  3 3 5 5 6 7
"""

from collections import deque

n = int(input())
kortec = tuple(map(int, input().split()))
k = int(input())

netice = []
d = deque()
for i in range(n):
    while d and kortec[d[-1]] <= kortec[i]:
        d.pop()
    d.append(i)
    if d[0] <= i - k:
        d.popleft()
    if i >= k - 1:
        netice.append(kortec[d[0]])

print(*tuple(netice))
