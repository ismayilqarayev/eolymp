"""
Sual 56: Iki elementin cemi verilmis hedefe beraber olan cutu tapin (2-sum).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde hedef eded.

Cixis (Output):
    Cemi hedefe beraber olan ilk tapilan cut, ve ya "Tapilmadi".

Numune:
    Giris:  4
            2 7 11 15
            9
    Cixis:  2 7

Qeyd:
    Bu sade (brute-force) hell O(N^2) mürəkkəbliyindədir. Daha suretli
    hell ucun hash cedveli (dict) istifade etmek olar: her elementi
    gorduyunde "hedef-element" lugatda olub-olmadigini yoxlamaq O(N) verir.
"""

n = int(input())
arr = list(map(int, input().split()))
hedef = int(input())

netice = None
for i in range(len(arr)):
    for j in range(i + 1, len(arr)):
        if arr[i] + arr[j] == hedef:
            netice = (arr[i], arr[j])
            break
    if netice:
        break

if netice:
    print(*netice)
else:
    print("Tapilmadi")
