"""
Sual 8: Kortecde verilmis ededin olub-olmadigini yoxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde axtarilan eded.

Cixis (Output):
    "Var" / "Yoxdur".

Numune:
    Giris:  4
            1 2 3 4
            3
    Cixis:  Var
"""

n = int(input())
kortec = tuple(map(int, input().split()))
x = int(input())

print("Var" if x in kortec else "Yoxdur")
