"""
Sual 42: zip() funksiyasindan istifade etmeden iki kortecı cut-cut (elementler
uzre) birlesdirin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded (A).
    3-cu setirde N eded (B).

Cixis (Output):
    Her cut "(a, b)" formatinda ayri setirde.

Numune:
    Giris:  3
            1 2 3
            4 5 6
    Cixis:  (1, 4)
            (2, 5)
            (3, 6)
"""

n = int(input())
a = tuple(map(int, input().split()))
b = tuple(map(int, input().split()))

for i in range(len(a)):
    cut = (a[i], b[i])   # elle kortec cutu qururuq (zip() evezine)
    print(cut)
