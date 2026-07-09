"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 41: Şagirdin balı verilib (0-100). Bal 90-dan yuxarıdırsa "A", 75-90 arası "B", 60-75 arası "C", əks halda "D" qiyməti çıxarın (and istifadə edərək).

Nümunə giriş:  82
Nümunə çıxış:  B

İzah: elif zənciri balı ardıcıl aralıqlarla müqayisə edir; hər blokda and iki sərhədi birləşdirir.
"""

bal = int(input())
if bal > 90:
    print("A")
elif bal > 75 and bal <= 90:
    print("B")
elif bal > 60 and bal <= 75:
    print("C")
else:
    print("D")
