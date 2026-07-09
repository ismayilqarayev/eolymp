"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 56: İki ədəd verilib. Onların işarələrinin (müsbət/mənfi) eyni olub-olmadığını yoxlayın.

Nümunə giriş:  -3 -7
Nümunə çıxış:  True

İzah: İki ədədin işarəsi (hər ikisi müsbət VƏ YA hər ikisi mənfi) eyni olub-olmadığı yoxlanılır.
"""

a, b = map(int, input().split())
print((a > 0 and b > 0) or (a < 0 and b < 0))
