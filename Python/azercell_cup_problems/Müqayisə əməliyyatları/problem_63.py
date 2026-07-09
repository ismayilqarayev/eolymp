"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 63: Bilet qiyməti: yaş verilib. 7-dən aşağı və ya 65-dən yuxarıdırsa "Endirimli bilet", əks halda "Tam qiymətli bilet" yazın.

Nümunə giriş:  70
Nümunə çıxış:  Endirimli bilet

İzah: Yaş qrupları üçün endirim şərti or ilə birləşdirilir — uşaq VƏ YA yaşlı olmaq kifayətdir.
"""

yas = int(input())
if yas < 7 or yas > 65:
    print("Endirimli bilet")
else:
    print("Tam qiymətli bilet")
