"""
Sual 87: Backtracking ile cemi verilmis hedefe beraber olan butun
alt-coxluqlari tapin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde hedef cem.

Cixis (Output):
    Cemi hedefe beraber olan her alt-coxluq, ayri setirde.

Numune:
    Giris:  4
            2 3 5 7
            10
    Cixis:  3 7
            2 3 5

Alqoritmin izahi (backtracking):
    Her elementi novbe ile "goturmek" ve ya "goturmemek" secimleri ile
    rekursiv agac qururuq. Cari cem hedefe catdiqda neticeni cap edirik.
    Cari cem hedefi keçdikde (ve ya elementler bitdikde) geri qayidiriq
    (backtrack) -- artiq faydasiz olan budaqlari kesib vaxta qenaet edirik.
"""


def backtrack(arr, hedef, basla, cari, cem):
    if cem == hedef:
        print(*cari)
        return
    if cem > hedef or basla == len(arr):
        return  # bu budaq artiq hedefe apara bilmez, geri qayit

    for i in range(basla, len(arr)):
        # arr[i]-ni cari alt-coxluga elave edib rekursiya edirik
        backtrack(arr, hedef, i + 1, cari + [arr[i]], cem + arr[i])


n = int(input())
arr = list(map(int, input().split()))
hedef = int(input())
backtrack(arr, hedef, 0, [], 0)
