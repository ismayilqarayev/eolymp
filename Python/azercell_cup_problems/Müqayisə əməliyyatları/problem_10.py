"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 10: İki söz verilib. Onların uzunluğunu müqayisə edin — birincinin daha uzun olub-olmadığını çıxarın.

Nümunə giriş:  salam necesen
Nümunə çıxış:  False

İzah: len() funksiyası sözün uzunluğunu (hərf sayını) hesablayır, sonra uzunluqlar müqayisə olunur.
"""

a, b = input().split()
print(len(a) > len(b))
