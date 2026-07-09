"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 70: Nəqliyyat: sürücünün yaşı və sürücülük vəsiqəsi olub-olmaması (True/False) verilib. Hər iki şərt ödənərsə "İcazə var" yazın.

Nümunə giriş:  19 True
Nümunə çıxış:  İcazə var

İzah: Sürücülük icazəsi üçün həm yaş, həm də vəsiqənin olması and operatoru ilə birlikdə yoxlanılır.
"""

yas, vesiqe = input().split()
yas = int(yas)
vesiqe = (vesiqe == "True")
if yas >= 18 and vesiqe:
    print("İcazə var")
