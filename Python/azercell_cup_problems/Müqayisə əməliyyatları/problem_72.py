"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 72: Su anbarı: su səviyyəsi (%) verilib. 20%-dən aşağıdırsa "Təhlükə", 20-70% arası "Normal", 70%-dən yuxarı "Dolu" yazın.

Nümunə giriş:  15
Nümunə çıxış:  Təhlükə

İzah: elif zənciri su səviyyəsini üç kateqoriyaya (təhlükə, normal, dolu) ayırır.
"""

seviyye = float(input())
if seviyye < 20:
    print("Təhlükə")
elif seviyye <= 70:
    print("Normal")
else:
    print("Dolu")
