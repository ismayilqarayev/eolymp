"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 59: İki ədəd verilib (a, b). a > b və a cütdürsə "Bəli", əks halda "Xeyr" yazın.

Nümunə giriş:  10 4
Nümunə çıxış:  Bəli

İzah: Hər iki şərt (böyüklük VƏ cütlük) doğrudursa "Bəli", əks halda "Xeyr" çap olunur.
"""

a, b = map(int, input().split())
if a > b and a % 2 == 0:
    print("Bəli")
else:
    print("Xeyr")
