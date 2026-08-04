"""
Sual 84: Kortec-kortec 'matris' ucun bas ve eks diaqonallarin cemini tapin.

Giris (Input):
    1-ci setirde N.
    Sonrakı N setirde matris (her setir bir kortec).

Cixis (Output):
    "bas_cem eks_cem".

Numune:
    Giris:  2
            1 2
            3 4
    Cixis:  5 4
"""

n = int(input())

matris = []
for _ in range(n):
    setir = tuple(map(int, input().split()))
    matris.append(setir)
matris = tuple(matris)   # kortec-kortec (nested tuple) "matris"

bas_cem = sum(matris[i][i] for i in range(n))
eks_cem = sum(matris[i][n - 1 - i] for i in range(n))

print(bas_cem, eks_cem)
