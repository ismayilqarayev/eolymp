"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 38: Ədədin 1 ilə 10 arasında olmadığını yoxlayın.

Nümunə giriş:  15
Nümunə çıxış:  True

İzah: Əvvəlcə 1 <= x <= 10 şərti yoxlanılır, sonra not ilə tərsinə çevrilir — ədəd bu aralıqda deyilsə True olur.
"""

x = int(input())
print(not (1 <= x <= 10))
