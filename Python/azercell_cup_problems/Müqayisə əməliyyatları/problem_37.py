"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 37: İstifadəçi adı və parol düzgünlüyünü yoxlayan iki True/False dəyər verilib. Hər ikisi doğrudursa "Giriş uğurludur" yazın, əks halda "Xəta".

Nümunə giriş:  True False
Nümunə çıxış:  Xəta

İzah: if/else konstruksiyası ilə hər iki şərt doğrudursa uğurlu mesaj, əks halda xəta mesajı çap olunur.
"""

u, p = input().split()
u = (u == "True")
p = (p == "True")
if u and p:
    print("Giriş uğurludur")
else:
    print("Xəta")
