"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 33: Ədədin 10-dan kiçik olmadığını yoxlayın (not (x < 10)).

Nümunə giriş:  15
Nümunə çıxış:  True

İzah: "x 10-dan kiçik deyil" ifadəsi məntiqcə x >= 10-a bərabərdir.
"""

x = int(input())
print(not (x < 10))
