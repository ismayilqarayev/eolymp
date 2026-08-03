"""
Sual 1: N eded tam eded daxil edilir. Onlari siyahiya yigib cap edin.

Giris (Input):
    1-ci setirde N (siyahinin uzunlugu).
    2-ci setirde N eded, boslugla ayrilmis.

Cixis (Output):
    Siyahini oldugu kimi, bir setirde boslugla ayrilmis sekilde cap edin.

Numune:
    Giris:  5
            1 2 3 4 5
    Cixis:  1 2 3 4 5
"""

# Siyahinin uzunlugunu oxuyuruq
n = int(input())

# N eded eded daxil olunur, split() bosluga gore ayirir,
# map(int, ...) her elementi tam edede cevirir, list() ile siyahiya cevirilir
arr = list(map(int, input().split()))

# * operatoru siyahini "aciblayaraq" (unpack) boslugla ayrilmis sekilde cap edir
print(*arr)
