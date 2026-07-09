"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 19: İki ədəd verilib. Onların hasilinin 50-dən böyük olub-olmadığını yoxlayın.

Nümunə giriş:  6 9
Nümunə çıxış:  True

İzah: Əvvəlcə iki ədədin hasili (a * b) hesablanır, sonra nəticə 50 ilə müqayisə olunur.
"""

a, b = map(int, input().split())
print(a * b > 50)
