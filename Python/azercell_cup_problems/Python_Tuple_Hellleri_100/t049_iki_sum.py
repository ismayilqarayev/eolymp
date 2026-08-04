"""
Sual 49: Kortecde iki elementin cemi N-e beraber olan ilk cutu tapin (2-sum).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde hedef eded.

Cixis (Output):
    Cut, ve ya "Tapilmadi".

Numune:
    Giris:  4
            2 7 11 15
            9
    Cixis:  2 7
"""

n = int(input())
kortec = tuple(map(int, input().split()))
hedef = int(input())

netice = None
for i in range(len(kortec)):
    for j in range(i + 1, len(kortec)):
        if kortec[i] + kortec[j] == hedef:
            netice = (kortec[i], kortec[j])
            break
    if netice:
        break

print(*netice) if netice else print("Tapilmadi")
