"""
Bölmə 1 — Müqayisə əməliyyatları (==, !=, >, <, >=, <=)

Məsələ 3: İki ədəd verilib. Onların bərabər olmadığını yoxlayın (!=).

Nümunə giriş:  7 7
Nümunə çıxış:  False

İzah: != operatoru iki qiymətin bir-birinə bərabər OLMADIĞINI yoxlayır.
"""

a, b = map(int, input().split())
print(a != b)
