"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 40: Bir ədəd verilib. Onun ya mənfi, ya da 1000-dən böyük olub-olmadığını yoxlayın.

Nümunə giriş:  1500
Nümunə çıxış:  True

İzah: Ədəd ya mənfidir, ya da 1000-dən böyükdür — bu iki şərt or ilə birləşir.
"""

x = int(input())
print(x < 0 or x > 1000)
