"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 29: İki ədəd verilib. Onlardan ən azı birinin 0-a bərabər olub-olmadığını yoxlayın.

Nümunə giriş:  0 5
Nümunə çıxış:  True

İzah: İki ədədin heç olmasa birinin sıfıra bərabər olması or operatoru ilə yoxlanılır.
"""

a, b = map(int, input().split())
print(a == 0 or b == 0)
