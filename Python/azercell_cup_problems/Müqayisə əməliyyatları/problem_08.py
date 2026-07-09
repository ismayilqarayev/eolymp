"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 8: İki hərf (simvol) verilib. Onların bərabər olub-olmadığını yoxlayın.

Nümunə giriş:  a b
Nümunə çıxış:  False

İzah: Simvollar mətn (string) kimi oxunur və birbaşa == ilə müqayisə olunur.
"""

a, b = input().split()
print(a == b)
