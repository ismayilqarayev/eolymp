"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 23: İki məntiqi dəyər verilib (True/False). Onların and ilə nəticəsini tapın.

Nümunə giriş:  True False
Nümunə çıxış:  False

İzah: Girişdəki mətn "True"/"False" əvvəlcə həqiqi Boolean (True/False) tipinə çevrilir, sonra and ilə birləşdirilir.
"""

a, b = input().split()
a = (a == "True")
b = (b == "True")
print(a and b)
