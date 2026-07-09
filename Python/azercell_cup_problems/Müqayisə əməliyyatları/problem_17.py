"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 17: İki mətn sətri verilib. Onların eyni olub-olmadığını yoxlayın.

Nümunə giriş:  Python python
Nümunə çıxış:  False

İzah: Mətn müqayisəsi böyük/kiçik hərfə həssasdır — "Python" və "python" fərqli sətir sayılır, ona görə False çıxır.
"""

a, b = input().split()
print(a == b)
