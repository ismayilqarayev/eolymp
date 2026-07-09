"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 47: Yaş verilib. Şəxsin "uşaq" (0-12), "yeniyetmə" (13-17), yoxsa "yetkin" (18+) olduğunu təyin edin.

Nümunə giriş:  15
Nümunə çıxış:  yeniyetmə

İzah: elif zənciri yaş aralıqlarını ardıcıl yoxlayır; ilk doğru olan şərt işə düşür.
"""

yas = int(input())
if yas <= 12:
    print("uşaq")
elif yas <= 17:
    print("yeniyetmə")
else:
    print("yetkin")
