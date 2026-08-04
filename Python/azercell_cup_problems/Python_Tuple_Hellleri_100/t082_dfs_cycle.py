"""
Sual 82: Kenar siyahisi ile verilmis qrafda DFS ile dovr (cycle) olub-olmadigini
yoxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde M.
    Sonrakı M setirde "u v".

Cixis (Output):
    "Beli" / "Xeyr".

Numune:
    Giris:  3
            3
            1 2
            2 3
            3 1
    Cixis:  Beli
"""

n = int(input())
m = int(input())

qraf = {i: [] for i in range(1, n + 1)}
kenarlar = []
for _ in range(m):
    u, v = map(int, input().split())
    kenarlar.append((u, v))   # kenar (u, v) kortecidir
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
            return True
    return False


dovr_var = False
for node in range(1, n + 1):
    if node not in ziyaret:
        if dfs(node, -1):
            dovr_var = True
            break

print("Beli" if dovr_var else "Xeyr")
