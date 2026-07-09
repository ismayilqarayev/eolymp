"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 58: Ədəd verilib. Onun 100-dən böyük olmadığını və mənfi olmadığını yoxlayın.

Nümunə giriş:  50
Nümunə çıxış:  True

İzah: "100-dən böyük deyil" VƏ "mənfi deyil" şərtləri birlikdə əslində 0 <= x <= 100 demədir.
"""

x = int(input())
print(not (x > 100) and not (x < 0))
