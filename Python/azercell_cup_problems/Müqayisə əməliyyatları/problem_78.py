"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 78: Kitabxana sistemi: kitabın gecikmə günü verilib. 0-dırsa "Cərimə yoxdur", 1-7 arası "Kiçik cərimə", 7-dən çoxdursa "Böyük cərimə" yazın.

Nümunə giriş:  10
Nümunə çıxış:  Böyük cərimə

İzah: Gecikmə günü üç kateqoriyaya (yoxdur, kiçik, böyük) elif zənciri ilə bölünür.
"""

gun = int(input())
if gun == 0:
    print("Cərimə yoxdur")
elif gun <= 7:
    print("Kiçik cərimə")
else:
    print("Böyük cərimə")
