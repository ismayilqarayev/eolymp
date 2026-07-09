"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 68: Bank sistemi: hesab balansı və çıxarılacaq məbləğ verilib. Balans məbləğdən böyük və ya bərabərdirsə "Əməliyyat uğurludur", əks halda "Balans kifayət etmir" yazın.

Nümunə giriş:  100 150
Nümunə çıxış:  Balans kifayət etmir

İzah: Balansın çıxarılacaq məbləğdən böyük və ya ona bərabər olması şərti yoxlanılır.
"""

balans, mebleg = map(float, input().split())
if balans >= mebleg:
    print("Əməliyyat uğurludur")
else:
    print("Balans kifayət etmir")
