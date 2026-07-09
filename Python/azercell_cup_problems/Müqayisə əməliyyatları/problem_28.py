"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 28: Ədədin mənfi olmadığını (not (x < 0)) yoxlayın.

Nümunə giriş:  7
Nümunə çıxış:  True

İzah: not (x < 0) ifadəsi "x mənfi deyil" deməkdir, yəni x >= 0 ilə eynidir.
"""

x = int(input())
print(not (x < 0))
