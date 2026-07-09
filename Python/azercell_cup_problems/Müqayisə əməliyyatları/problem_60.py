"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 60: Mövsüm sistemi: ay nömrəsi verilib (1-12). Ayın yaz (3,4,5), yay (6,7,8), payız (9,10,11), yoxsa qış olduğunu təyin edin.

Nümunə giriş:  7
Nümunə çıxış:  yay

İzah: in operatoru ayın müəyyən qrupa (dəstə) aid olub-olmadığını yoxlayır; hər qrup bir mövsümə uyğundur.
"""

ay = int(input())
if ay in (3, 4, 5):
    print("yaz")
elif ay in (6, 7, 8):
    print("yay")
elif ay in (9, 10, 11):
    print("payız")
else:
    print("qış")
