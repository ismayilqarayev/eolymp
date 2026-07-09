"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 1: İki ədəd verilib. Onların bərabər olub-olmadığını yoxlayın.

Nümunə giriş:  5 5
Nümunə çıxış:  True

İzah: İki ədəd split() ilə ayrılıb tam ədədə çevrilir, sonra == operatoru ilə bərabərlik yoxlanılır.
"""

a, b = map(int, input().split())
print(a == b)
