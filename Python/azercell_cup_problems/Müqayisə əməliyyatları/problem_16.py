"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 16: Ədədin 3 rəqəmli olub-olmadığını yoxlayın (>= 100 və <= 999 — yalnız müqayisə ilə).

Nümunə giriş:  45
Nümunə çıxış:  False

İzah: Python-da iki müqayisəni zəncirvari yazmaq olar: 100 <= x <= 999 ədədin bu aralıqda olub-olmadığını yoxlayır (3 rəqəmli ədəd şərti).
"""

x = int(input())
print(100 <= x <= 999)
