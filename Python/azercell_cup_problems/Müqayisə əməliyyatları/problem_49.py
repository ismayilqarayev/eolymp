"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 49: Ədəd verilib. Onun həm müsbət, həm 3 rəqəmli olub-olmadığını yoxlayın.

Nümunə giriş:  256
Nümunə çıxış:  True

İzah: Ədədin həm müsbət, həm də 3 rəqəmli (100-999 aralığında) olması and ilə birləşdirilir.
"""

x = int(input())
print(x > 0 and 100 <= x <= 999)
