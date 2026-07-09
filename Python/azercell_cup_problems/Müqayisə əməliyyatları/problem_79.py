"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 79: Hava limanı: uçuşun gecikməsi (dəqiqə) verilib. Gecikmə 0-dırsa "Vaxtında", 1-60 arası "Az gecikmə", 60-dan çoxdursa "Böyük gecikmə" yazın.

Nümunə giriş:  0
Nümunə çıxış:  Vaxtında

İzah: Kitabxana məsələsinə bənzər məntiqlə uçuşun gecikmə müddəti üç qrupa ayrılır.
"""

deqiqe = int(input())
if deqiqe == 0:
    print("Vaxtında")
elif deqiqe <= 60:
    print("Az gecikmə")
else:
    print("Böyük gecikmə")
