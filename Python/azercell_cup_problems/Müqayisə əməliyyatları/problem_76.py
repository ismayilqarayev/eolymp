"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 76: Restoran: sifarişin məbləği və günün "endirim günü" olub-olmaması verilib. Məbləğ 100 AZN-dən çoxdursa və ya endirim günüdürsə 10% endirim tətbiq edin.

Nümunə giriş:  120 False
Nümunə çıxış:  Endirim tətbiq olundu

İzah: İki şərtdən (yüksək məbləğ VƏ YA endirim günü) heç olmasa biri doğrudursa endirim tətbiq olunur.
"""

mebleg, endirim_gunu = input().split()
mebleg = float(mebleg)
endirim_gunu = (endirim_gunu == "True")
if mebleg > 100 or endirim_gunu:
    print("Endirim tətbiq olundu")
else:
    print("Endirim tətbiq olunmadı")
