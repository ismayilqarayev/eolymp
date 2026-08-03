"""
Sual 95: DFS ile qrafda dovr (cycle) olub-olmadigini yoxlayin
(yonelisiz qraf ucun).

Giris (Input):
    1-ci setirde N.
    2-ci setirde M.
    Sonrakı M setirde her biri "u v" (kenar).

Cixis (Output):
    "Beli" - eger qrafda dovr varsa, eks halda "Xeyr".

Numune:
    Giris:  3
            3
            1 2
            2 3
            3 1
    Cixis:  Beli

Alqoritmin izahi:
    Yonelisiz qrafda dovr tapmaq ucun DFS aparirq ve her tepe ucun
    "haradan geldiyimizi" (parent) yadda saxlayiriq. Eger DFS zamani
    artiq ziyaret edilmis, lakin parent OLMAYAN bir qonsuya rast
    gelsek, bu dovr deməkdir (cunki qrafda bir kenar vasitesile deyil,
    basqa yolla da bu tepeye catmaq mumkun olub).
"""

n = int(input())
m = int(input())

qraf = {i: [] for i in range(1, n + 1)}
for _ in range(m):
    u, v = map(int, input().split())
    qraf[u].append(v)
    qraf[v].append(u)

ziyaret = set()


def dfs(node, parent):
    ziyaret.add(node)
    for qonsu in qraf[node]:
        if qonsu not in ziyaret:
            if dfs(qonsu, node):
                return True
        elif qonsu != parent:
            # Ziyaret edilib, amma parent deyil -- demeli dovr var
            return True
    return False


dovr_var = False
for node in range(1, n + 1):
    if node not in ziyaret:
        if dfs(node, -1):
            dovr_var = True
            break

print("Beli" if dovr_var else "Xeyr")
