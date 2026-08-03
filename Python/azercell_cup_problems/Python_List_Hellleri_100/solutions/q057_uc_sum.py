"""
Sual 57: Cemi 0 olan butun ucluklari tapin (3-sum, sade brute-force usulu).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    Cemi 0 olan her uc element (her setirde ayri ucluk).

Numune:
    Giris:  4
            -1 0 1 2
    Cixis:  -1 0 1

Qeyd:
    Uc ic-ice dovr ile butun mumkun uc-element kombinasiyalarini yoxlayiriq --
    bu O(N^3) mürəkkəbliyindədir, kicik siyahilar ucun kifayetdir.
"""

n = int(input())
arr = list(map(int, input().split()))

netice = []
for i in range(len(arr)):
    for j in range(i + 1, len(arr)):
        for k in range(j + 1, len(arr)):
            if arr[i] + arr[j] + arr[k] == 0:
                netice.append((arr[i], arr[j], arr[k]))

for uc in netice:
    print(*uc)
