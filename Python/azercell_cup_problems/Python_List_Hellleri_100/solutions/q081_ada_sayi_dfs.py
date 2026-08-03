"""
Sual 81: 0/1 matrisde 'adalarin sayini' DFS ile tapin.

Giris (Input):
    1-ci setirde N ve M.
    Sonrakı N setirde matris (0 -- su, 1 -- quru/ada).

Cixis (Output):
    Ada sayi (dord istiqametde -- yuxari/asagi/sol/sag -- birlesmis 1-lerin qrup sayi).

Numune:
    Giris:  3 3
            1 1 0
            0 1 0
            0 0 1
    Cixis:  2

Alqoritmin izahi:
    Her ziyaret edilmemis "1" xanasindan DFS (derinlik-ustunlu axtaris)
    baslayiriq. DFS o xana ile qonsu (yuxari, asagi, sol, sag) olan
    butun "1"-leri ziyaret edir ve bu bir ada teskil edir. Her yeni
    DFS baslangici bir ada deməkdir, ona gore de ada sayini 1 artiririq.
"""

import sys
sys.setrecursionlimit(10000)


def dfs(matris, ziyaret, i, j, n, m):
    # Sahedan cixdiqda, artiq ziyaret edildikde, ve ya su (0) olduqda geri qayit
    if i < 0 or i >= n or j < 0 or j >= m:
        return
    if ziyaret[i][j] or matris[i][j] == 0:
        return

    ziyaret[i][j] = True  # bu xananı ziyaret edilmis kimi isaretleyirik

    # Dord isiqametde qonsulari da ziyaret edirik
    dfs(matris, ziyaret, i + 1, j, n, m)
    dfs(matris, ziyaret, i - 1, j, n, m)
    dfs(matris, ziyaret, i, j + 1, n, m)
    dfs(matris, ziyaret, i, j - 1, n, m)


n, m = map(int, input().split())
matris = [list(map(int, input().split())) for _ in range(n)]
ziyaret = [[False] * m for _ in range(n)]

ada_sayi = 0
for i in range(n):
    for j in range(m):
        if matris[i][j] == 1 and not ziyaret[i][j]:
            # Yeni, hele ziyaret edilmemis ada tapdiq -- onu tam gezib isaretleyirik
            dfs(matris, ziyaret, i, j, n, m)
            ada_sayi += 1

print(ada_sayi)
