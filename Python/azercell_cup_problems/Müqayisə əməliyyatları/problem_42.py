"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 42: Üç ədəd verilib. Ən böyüyünü tapın (yalnız müqayisə və məntiqi operatorlarla).

Nümunə giriş:  4 9 7
Nümunə çıxış:  9

İzah: Hər ədəd növbə ilə digər ikisi ilə müqayisə olunur; hər ikisindən böyük və ya bərabər olan ədəd ən böyükdür.
"""

a, b, c = map(int, input().split())
if a >= b and a >= c:
    print(a)
elif b >= a and b >= c:
    print(b)
else:
    print(c)
