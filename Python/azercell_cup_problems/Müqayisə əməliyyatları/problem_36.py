"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 36: Bir ədəd verilib. Onun həm 2-yə, həm də 3-ə bölünüb-bölünmədiyini yoxlayın.

Nümunə giriş:  18
Nümunə çıxış:  True

İzah: Ədəd həm 2-yə, həm də 3-ə bölünməlidir — bu, faktiki olaraq 6-ya bölünmə şərtinə bərabərdir.
"""

x = int(input())
print(x % 2 == 0 and x % 3 == 0)
