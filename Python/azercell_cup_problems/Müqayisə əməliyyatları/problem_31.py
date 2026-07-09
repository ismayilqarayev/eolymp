"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 31: Üç məntiqi dəyər verilib. Onların hamısının and ilə nəticəsini tapın.

Nümunə giriş:  True True False
Nümunə çıxış:  False

İzah: Üç şərtin hamısının doğru olması tələb olunduqda and operatorları ardıcıl zəncirlənir.
"""

a, b, c = input().split()
a = (a == "True")
b = (b == "True")
c = (c == "True")
print(a and b and c)
