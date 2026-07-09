"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 35: Bir ədəd verilib. Onun 5-ə və ya 3-ə bölünüb-bölünmədiyini yoxlayın.

Nümunə giriş:  9
Nümunə çıxış:  True

İzah: Ədəd 5-ə VƏ ya 3-ə bölünürsə (heç olmasa biri) nəticə True olur.
"""

x = int(input())
print(x % 5 == 0 or x % 3 == 0)
