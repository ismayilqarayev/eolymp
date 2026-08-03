"""
Sual 37: Elementleri tezliyine gore azalan sirada cap edin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.

Cixis (Output):
    "eded:tezlik" formatinda cutler, tezliye gore azalan sirada.

Numune:
    Giris:  5
            1 2 2 3 2
    Cixis:  2:3 1:1 3:1
"""

n = int(input())
arr = list(map(int, input().split()))

# Lugat (dictionary) her ededin nece defe rast gelmesini saxlayir
tezlik = {}
for x in arr:
    # get(x, 0) -- x lugatda yoxdursa 0 qaytarir, varsa movcud qiymeti
    tezlik[x] = tezlik.get(x, 0) + 1

# items() -- (eded, tezlik) cutlerini qaytarir
# key=lambda p: -p[1] -- tezliye gore AZALAN sirada siralamaq ucun mənfi işare
netice = sorted(tezlik.items(), key=lambda p: -p[1])

print(" ".join(f"{k}:{v}" for k, v in netice))
