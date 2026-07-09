"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 75: Kredit sistemi: aylıq gəlir və tələb olunan minimum gəlir verilib. Gəlir minimumdan böyük və ya bərabərdirsə "Kredit verilə bilər" yazın.

Nümunə giriş:  800 750
Nümunə çıxış:  Kredit verilə bilər

İzah: Aylıq gəlirin tələb olunan minimuma bərabər və ya ondan çox olması yoxlanılır.
"""

gelir, minimum = map(float, input().split())
if gelir >= minimum:
    print("Kredit verilə bilər")
