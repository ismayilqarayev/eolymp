"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 13: İki ədəd verilib. Hər ikisinin bərabər olub-olmadığını (==) yoxlayın.

Nümunə giriş:  12.5 12.5
Nümunə çıxış:  True

İzah: Onluq kəsr (float) ədədlər float() ilə çevrilir və == ilə müqayisə edilir.
"""

a, b = map(float, input().split())
print(a == b)
