"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 6: İki ədəd verilib. Birincinin ikincidən kiçik və ya bərabər olub-olmadığını yoxlayın.

Nümunə giriş:  10 10
Nümunə çıxış:  True

İzah: Birinci ədəd ikincidən kiçik və ya ona bərabərdirsə nəticə True olur.
"""

a, b = map(int, input().split())
print(a <= b)
