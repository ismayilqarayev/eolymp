"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 43: Üç ədəd verilib. Ən kiçiyini tapın.

Nümunə giriş:  4 9 7
Nümunə çıxış:  4

İzah: Əvvəlki məsələnin əksi — hər ədəd digər ikisindən kiçik və ya bərabər olub-olmadığına görə yoxlanılır.
"""

a, b, c = map(int, input().split())
if a <= b and a <= c:
    print(a)
elif b <= a and b <= c:
    print(b)
else:
    print(c)
