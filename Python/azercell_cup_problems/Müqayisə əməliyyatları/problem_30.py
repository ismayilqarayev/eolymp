"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 30: İki ədəd verilib. Hər ikisinin eyni zamanda müsbət olub-olmadığını yoxlayın.

Nümunə giriş:  -2 4
Nümunə çıxış:  False

İzah: Hər iki ədədin eyni zamanda müsbət olması üçün and operatorundan istifadə olunur.
"""

a, b = map(int, input().split())
print(a > 0 and b > 0)
