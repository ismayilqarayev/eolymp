"""
Sual 16: Siyahida verilmis ededin olub-olmadigini yoxlayin.

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde axtarilan eded.

Cixis (Output):
    "Var" - eger eded siyahida movcuddursa, eks halda "Yoxdur".

Numune:
    Giris:  4
            1 2 3 4
            3
    Cixis:  Var
"""

n = int(input())
arr = list(map(int, input().split()))
x = int(input())

# "in" operatoru siyahida elementin olub-olmadigini yoxlamaq ucun istifade olunur
if x in arr:
    print("Var")
else:
    print("Yoxdur")
