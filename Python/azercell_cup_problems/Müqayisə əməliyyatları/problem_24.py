"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 24: İki məntiqi dəyər verilib. Onların or ilə nəticəsini tapın.

Nümunə giriş:  False False
Nümunə çıxış:  False

İzah: İki Boolean dəyər or operatoru ilə birləşdirilir — hər ikisi False-dursa nəticə də False olur.
"""

a, b = input().split()
a = (a == "True")
b = (b == "True")
print(a or b)
