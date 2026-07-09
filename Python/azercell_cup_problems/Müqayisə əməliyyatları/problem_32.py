"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 32: Üç məntiqi dəyər verilib. Onlardan heç olmasa birinin True olub-olmadığını (or) yoxlayın.

Nümunə giriş:  False False True
Nümunə çıxış:  True

İzah: or zənciri — dəyərlərdən ən azı biri True-dursa, ümumi nəticə də True olur.
"""

a, b, c = input().split()
a = (a == "True")
b = (b == "True")
c = (c == "True")
print(a or b or c)
