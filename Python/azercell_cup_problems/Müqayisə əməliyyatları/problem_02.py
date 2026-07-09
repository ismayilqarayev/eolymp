"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 2: İki ədəd verilib. Birincinin ikincidən böyük olub-olmadığını yoxlayın.

Nümunə giriş:  8 3
Nümunə çıxış:  True

İzah: > operatoru birinci ədədin ikincidən böyük olub-olmadığını True/False şəklində qaytarır.
"""

a, b = map(int, input().split())
print(a > b)
