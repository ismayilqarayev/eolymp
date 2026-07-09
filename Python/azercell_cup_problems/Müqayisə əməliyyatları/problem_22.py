"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 22: Ədədin 10-dan böyük və ya mənfi olub-olmadığını yoxlayın.

Nümunə giriş:  -3
Nümunə çıxış:  True

İzah: or operatoru şərtlərdən ən azı birinin doğru olmasını kifayət sayır.
"""

x = int(input())
print(x > 10 or x < 0)
